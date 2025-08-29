#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        if((n-b)%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        if((n-a)%2==0){
            cout<<"YES"<<endl;
           continue;
        }
        if(a<b){
            cout<<"YES"<<endl;

        }else cout<<"NO"<<endl;
    }
    return 0;
}