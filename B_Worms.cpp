#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];

    }
    int m;
    cin>>m;
    vector<int>b(m);
    int ans=0;
    for(int i=0;i<m;i++){
        cin>>b[i];
    
       cout<<  lower_bound(a.begin(),a.end(),b[i])-a.begin()<<endl;
    }
    return 0;
}