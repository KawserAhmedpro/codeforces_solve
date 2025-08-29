#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long c=k+1;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            long long b=a%c;
            long long d=a+b*k;
            cout<<d<<(i==n-1?"" : " ");
        }
        cout<<endl;

    }
    return 0;
}