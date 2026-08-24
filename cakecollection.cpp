#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long sum=0;
         vector<int>a(n);
       for(int i=0;i<n;i++){
            cin>>a[i];

       }
       sort(a.rbegin(),a.rend());
       
       for(int i=0;i<min(n,m);i++){
        sum+=1LL*a[i]*(m-i);
       }
       cout<<sum<<endl;

    }
    return 0;
}