#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        } if(x>=n) cout<<"YES"<<endl;
        else{
int l,r;
        for(int i=0;i<n;i++){
            if(v[i]==1){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]==1){
                r=i;
                break;
            }
        }
        if(r-l==x-1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

        
    }
}
    return 0;
}