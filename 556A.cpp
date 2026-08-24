#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    long long zero=0,one=0;
    for(int i=0;i<n;i++){
        
        if(s[i]=='0')zero++;
        else one++;
    }
    cout<<abs(zero-one)<<endl;
    return 0;
}