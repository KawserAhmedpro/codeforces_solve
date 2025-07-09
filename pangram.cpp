#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    for(auto it:s){
        st.insert(tolower(it));
    }
    if(st.size()==26)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}