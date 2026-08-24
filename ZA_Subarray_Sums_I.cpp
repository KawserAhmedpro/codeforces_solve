#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int> pre(n+1);
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    int count=0;
    map<int,int> mp;
    for(int R=0;R<=n;R++){
        count+=mp[pre[R]-x];
        mp[pre[R]]++;
    };
    cout<<count<<endl;
    
}