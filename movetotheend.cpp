#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<long long>pre(n+1);
        for(int i=1;i<=n;i++){
            pre[i]=v[i]+pre[i-1];
        }
        long long x= v.back();
        cout<<x<<" ";
        for(int i=2;i<=n;i++){
            cout<<pre[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}