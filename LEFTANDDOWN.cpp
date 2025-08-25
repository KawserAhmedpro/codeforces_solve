#include<bits/stdc++.h>
using namespace  std;
int main(){
    int t;
    cin>>t;
    while(t--){
      
        int a,b,k;
        cin>>a>>b>>k;
        if(a<=k&&b<=k)cout<<'1'<<endl;
        else
            {int gcd=__gcd(a,b);
             if(gcd==1)cout<<'2'<<endl;
             else cout<<'1'<<endl;
            }
       
    }
    return 0;
}