#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s = to_string(n);
    int ans =INT_MAX;
    for(char c:s){
        int digit = c-'0';
        if(digit<ans){
            ans=digit;
        }

    }
    cout<<ans<<endl;

   }
   return 0;
}