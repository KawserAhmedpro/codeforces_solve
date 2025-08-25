#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    set<long long>r,c;
    while(m--){
        long long x,y;
        cin>>x>>y;
        r.insert(x);
        c.insert(y);
        cout<<(n-r.size())*(n-c.size())<<' ';
    }
}