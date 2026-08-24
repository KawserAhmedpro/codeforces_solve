#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n,k;
         cin>>n>>k;
         long long sum=0;
         vector<int>a(n+1),b(k+1);
         for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
         }
         for(int i=1;i<=k;i++){
            cin>>b[i];
         }
         sort(a.begin()+1,a.end());
         sort(b.begin()+1,b.end());

         long long id=n+1;
         for(int i=1;i<=k;i++){
            id-=b[i];
            if(id>=1){
                sum-=a[id];
            }
         }
         cout<<sum<<endl;
    }
    return 0;
}