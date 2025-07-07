#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char mnm= *min_element(s.begin(),s.end());
        int mn=0;
        for(int i=1;i<n;i++){
            if(mnm==s[i]){mn=i;};

        }
        cout<<mnm;

        for(int i=0;i<n;i++){
            if(mn==i)continue;
            else cout<<s[i];
        }
        cout<<"\n";

    }
}