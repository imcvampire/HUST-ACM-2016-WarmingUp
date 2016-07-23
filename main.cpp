#include <iostream>
#include <list>

using namespace std;

void check(int n, int m){
    list<int> dList;
    for(int i = 1; i<= n ;i++){
        dList.push_back(i);
    }
    list<int>::iterator it = dList.begin(), it2;
    int tem = 0;

    for(int i = 1; i < n; i++){
        advance(it, n-1);
        for(int j = 1; j <= m; j++){
            if(++it == dList.end())
                it = dList.begin();
            tem = (*it);
        }
        it2 = it;
        it2--;
        tem = (*it2);
        dList.erase(it);

        it = it2;
        tem = (*it);
    }
    cout<<(*it)<<endl;
}
int main()
{
    int T, n, k;
    cin>>T;
    while(T--){
        cin>>n>>k;
        check(n,k);
    }
    return 0;
}
