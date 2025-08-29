#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,e,f;
        cin>>a>>b>>e>>f;
        int c=e-a;
        int d=f-b;
        int first =0;
        int second =0;
        if(a>b){
            if(a%2==0){
               if((a/2)-1 <=b)
              first =1;
               else first=0;
            }
            else {
                if(a/2<=b){
                      first =1;
                }
                 else   first=0;
            }
        }
         
        else {
             if(b%2==0){
               if((b/2)-1 <=a)
                first =1;
               else  first=0;
            }
            else {
                if(b/2<=a){
                      first =1;
                }
                 else  first=0;
            }
        }




          if(c>d){
            if(c%2==0){
               if((c/2)-1 <=d)
               second=1;
               else second=0;
            }
            else {
                if(c/2<=d){
                    second=1;
                }
                 else second=0;
            }
        }
         
        else {
             if(d%2==0){
               if((d/2)-1 <=c)
               second=1;
               else second=0;
            }
            else {
                if(d/2<=c){
                     second=1;
                }
                 else second=0;
            }
        }

if(first==1 && second ==1)
{cout<<"YES"<<endl;}
else cout<<"NO"<<endl;

    }
    return 0;
}