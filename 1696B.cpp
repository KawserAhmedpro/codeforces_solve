#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      
       int n;
       cin>>n;
       vector<int>a(n+1);
       for(int i=1;i<=n;i++){
        cin>>a[i];
       }

       int count=0;
        a[0]=0;
        for(int i=1;i<=n;i++){
            if(a[i-1]==0&&a[i]!=0){count++;
            }
        }
        if(count >2)count=2;
        cout<<count<<endl;
       
        
       }
       return 0;
    }