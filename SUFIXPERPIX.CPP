#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         vector<int>v(n);
         for(int i=0;i<n;i++){
            cin>>v[i];

         }
       for(int i=0;i<n;i++){
         int min=INT_MAX;
         int max=INT_MIN;
         int l=0;
         for(int j=0;j<=i;j++)
         {
            min=min_element(min,v[j]);

         }
         for(int k=i;k<n;k++){
            max=max_element(max,v[k]);
         }

         if(v[i]==min||v[i]==max){
            cout<<1;
         }
         else cout<<0;
 
    }
    cout<<endl;






    }
    return 0;
}

