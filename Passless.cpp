#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,sum=0;
        int ans=-1;
        cin>>n>>s;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<=s){
           cout<<ans<<endl;  
        }
        else{
            int b,c;
            for(int i=0;i<n;i++){
                if (a[i]==1) b=i;
                if(a[i]==2) c=i;
            }
         swap(a[b],a[c]);
         for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
         }
         cout<<endl;
        }

    }
    return 0;
}