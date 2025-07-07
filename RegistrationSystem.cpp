#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>cnt;
    string s;
    
    for(int i=0;i<n;i++){
       
        cin>>s;
        if(cnt[s]==0)cout<<"OK"<<endl;
        else 
        cout<<s<<cnt[s]<<endl;
        cnt[s]++;
    }
    return 0;
}

