#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>st;
    int p,q;
    cin>>p;
    while(p--){
        int x;
        cin>>x;
        st.insert(x);
    }
   cin>>q;
    while(q--){
        int x;
        cin>>x;
        st.insert(x);
    }
   if(st.size()==n)cout<< "I become the guy."<<endl;
   else cout<<"Oh, my keyboard!"<<endl;
   return 0;
}