#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int m,a,b,c;
       cin>>m>>a>>b>>c;
       int ans=0,left=0;
       ans+=min(a,m);
       left=m-ans;
       ans+=min(b,m);
       left=m-ans;
       ans+=min(left,c);
       cout<<ans<<endl;
    }
    return 0;
}