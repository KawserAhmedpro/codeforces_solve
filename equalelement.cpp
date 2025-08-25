#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a[200000],b[200000];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
      sort(a,a+n);
     for(int i=0;i<m;i++){
        cin>>b[i];
         int ans = upper_bound(a,a+n,b[i])-a;
         cout<<ans<<" ";

    }
    cout<<endl;
    return 0;

  
   
}