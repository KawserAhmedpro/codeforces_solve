#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        // sort(a.begin(),a.end());
        // int ans=a[n-1]-a[0];
        // cout<<ans<<endl;
        //fixed arr[n]
        int maxi= a[n]-a[1];
        for(int i=1;i<=n-1;i++){
            maxi=max(maxi,a[n]-a[i]);
        }
        //fixed a[0]
        for(int i=2;i<=n;i++){
            maxi=max(maxi,a[i]-a[1]);

        }
        for(int i=1;i<=n-1;i++){
            maxi=max(maxi,a[i]-a[i+1]);
        }

        cout<<maxi<<endl;

        
    }
    return 0;
}