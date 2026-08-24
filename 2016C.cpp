#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        

        if(count(b.begin(),b.end(),-1)==n){
             sort(a.begin(),a.end());
             cout<<a[0]+k-a[n-1]+1<<endl;
             continue;
        }

        
            int sum=0;

           for(int i=0;i<n;i++){
            if(b[i]!=-1){
                sum=a[i]+b[i];
                break;
            }
           }
           bool ok=true;
           for(int i=0;i<n;i++){
            if(b[i]!=-1){
                if( a[i]+b[i]!=sum){
                    
                    ok=false;
                    break;
                }
            }
            else {
                int need=sum-a[i];
                if(need<0 || need>k){
                 
                    ok =false;
                    break;
                }
            }
           }
         cout << (ok?1:0) << endl;




    
        

    }
    return 0;
}