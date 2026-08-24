#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        // int count =2;
        // for(int i=1;i<n;i++){
        //     if(a[0]==a[i]){
        //         count++;
                
        //     }
        //     if(a[0]!=a[i]){
        //         i=n;
        //         break;
        //     }
        // }
        // cout<<count<<endl;

        int cntless=2,cntgreater=2;
        int mxcl=0,mxgt=0;
        if(a[0]=='<'){
            for(int i=1;i<n;i++){
                if(a[i]==a[0]){

                     cntless++;
                      mxcl=max(mxcl,cntless);
                }
                else cntless=2;

            }
        }
        else {
            for(int i=1;i<n;i++){
                if(a[i]==a[0]){

                     cntgreater++;
                      mxgt=max(mxgt,cntgreater);
                }
                else cntgreater=2;

            }
        }
        cout<<max(mxcl,mxgt)<<endl;

    }
    return 0;
}