#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;


int main()
{
    int x1, x2, y1, y2;
    cin>>x1>>y1>>x2>>y2;
    float d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    float d1 = sqrt(x1*x1 + y1*y1);
    float d2 = sqrt(x2*x2+y2*y2);
    float p = 0, h = 0;

    if(d1 < d2){
        d1 = ceil(d1);
        d2 = floor(d2);
    }else{
        d1 = floor(d1);
        d2 = ceil(d2);
    }
    int res = 0;
    if( x1*x2*y1*y2 >= 0 ){
        res = abs(d1-d2)+1;
    }else{
        p = (d+d1+d2)/2;
        h = 2*sqrt(p*(p-d)*(p-d1)*(p-d2))/d;
        h = ceil(h);
        res = d1-h+1+d2-h+1;
    }
    cout<<res;
    return 0;
}
