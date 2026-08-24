//lenth er shoman koita subarry ase jader sum length er shoman
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
            cin>>a[i];
        }

    vector<int>nm(n+1);
    for(int i=1;i<=n;i++){
        nm[i]=a[i]-1;}

        vector<int> pre(n+1);
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+nm[i];
        }

        long long  ans=0;
        map<int,int> mp;
        for(int R=0;R<=n;R++){
            ans+=mp[pre[R]-0];
            mp[pre[R]]++;
        }   
        cout<<ans<<endl;
        return 0;



}