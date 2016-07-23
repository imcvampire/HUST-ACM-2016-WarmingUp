#include <iostream>
#include <list>

using namespace std;
/*
void check(int n, int m){
    list<int> dList;
    for(int i = 1; i<= n ;i++){
        dList.push_back(i);
    }
    list<int>::iterator it = dList.begin(), it2;
    int tem = 0;

    advance(it, n-1);
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= m; j++){
            if(++it == dList.end())
                it = dList.begin();
            tem = (*it);
        }
        it2 = it;
        if(it2 == dList.begin()){
            advance(it2, n-i-1);
        }else
            it2--;
        tem = (*it2);
        dList.erase(it);
        it = it2;
        tem = (*it);

    }

    cout<<(*it)<<endl;
}
*/
void check2(int n, int m){
    list<int> dList;
    for(int i = 1; i<= n ;i++){
        dList.push_back(i);
    }
    list<int>::iterator it = dList.begin(), it2;
    int tem = 0;
    int be= 0;

    for(int i = 0; i < n-1; i++){
       int pos = m % (n-i);
       if(pos == 0)
            pos = n-i;
        pos--;

       advance(it, pos+be);
       be = pos;
       if(be == n-1)
            be = 0;
       tem = *it;
       dList.erase(it);
       it = dList.begin();
       tem = *it;
    }
    cout<<tem<<endl;
    return;
}
int main()
{
    int T, n, k;
    cin>>T;
    while(T--){
        cin>>n>>k;
        check2(n,k);
    }
    return 0;
}
