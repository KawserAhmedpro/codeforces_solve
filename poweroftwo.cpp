#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     vector<int>a(n+1);
     for(int i=1;i<=n;i++){
        cin>>a[i];
     }
     map<int ,int>cnt;
     int ans =0;
     for(int i=1;i<=n;i++){
        for(int p=0;p<=30;p++){
            int sum= (1<<p);
            int need = sum - a[i];
            ans+=cnt[need];
        }
        cnt[a[i]]++;
     }
     cout << ans<<endl;
    return 0;
}