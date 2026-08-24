#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=0,r=1;
    int n=s.length();
    for(int i=0;i<=n;i++){
         if(s[l]==s[r]){
            s.erase(l,2);
            l--;r--;
         }
         else {
            l++;r++;
         }
    }
    cout<<s<<endl;
    return 0;
}