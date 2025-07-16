#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        string s,t;
        cin>>s;
        vector<int>v(10);
        for(int i=0;i<s.size();i++){
            v[s[i]-'0']++;
        }
        for(int i=0;i<10;i++){
             int cnt =9-i;
             for(int j=cnt;j<=9;j++){
                if(v[j]>0){
                    t+=(j+'0');
                    v[j]--;
                    break;
                }
             }
        }
        cout<<t<<endl;
    }
}