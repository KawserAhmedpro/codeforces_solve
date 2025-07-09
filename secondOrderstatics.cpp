#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    int index=1;
    auto it=st.begin();
    advance(it,index);
    cout<<*it<<endl;
}