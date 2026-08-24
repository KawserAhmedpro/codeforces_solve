#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(a>b){
            if(a%b==0)cout<<1<<endl;
            else cout<<2<<endl;
            continue;
        }
         if(b>a){
            if(b%a==0)cout<<1<<endl;
            else cout<<2<<endl;
            continue;
        }
        cout<<endl;
    }
    return 0;
}