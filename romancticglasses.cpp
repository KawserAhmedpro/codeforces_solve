#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;

     cin>>n;
     map<long long , bool> sum;
     bool isyes = false;
     long long s=0;
     sum[0] = true;
     for(int i=0,x;i<n;i++){
        cin>>x;
        if(i%2==0) x *= -1;
        s=s+x;
        if(sum[s]==true){
            isyes =true;
        }
        sum[s]=true;
     }
     if(isyes){cout<<"YES"<<endl;}
     else cout<<"NO"<<endl;
     

    }
    return 0;
}