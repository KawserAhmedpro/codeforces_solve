#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"enter number of elements-:";
   cin>>n;
   vector <int>  pre(n+1);
   for(int i=1;i<=n;i++){
    cin>>pre[i];
    pre[i]+=pre[i-1];
   }
   
   //for(int i=1;i<=n;i++){
  //  cout<<pre[i]<<" ";
//}
   return 0;


}