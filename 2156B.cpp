#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
          long long n,q;
          cin>>n>>q;
          string s;
          cin>>s;
          long long mx=600;
          char arr[620];
          int flag=0;
          for(int i=0;i<n;i++){
            if(s[i]=='B'){
                flag=1;
            }
          }
          long long index=0;
          for(int i=1;i<=mx;i++){
               arr[i]=s[index];
               index++;
               if(index==n){
                index=0;
               }
          }


          long long query[q+10];
          for(int i=1;i<=q;i++){
            cin>>query[i];
          }
          

          for(int i=1;i<=q;i++){
           long long a=query[i],sum=0;
            if(flag==0){
                cout<<a<<endl;
                continue;
            }
            for(int j=1;j<=mx;j++){
                if(arr[j]=='A'){
                    a--;
                    sum++;
                }
                else {
                    a=a/2;
                    sum++;
                }
                if(a<=0){
                    break;
                }
            }
            cout<<sum<<endl;
            
          }
    }
    return 0;
}