#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        for(int i=0,x;i<n;i++){
            cin>>x;
            s.insert(x);
        }
         int a=s.size();
        for(int i=0;i<n;i++){
            if(i<s.size()){
                cout<<s.size()<<" ";
            }
            else{
           
            a++;
            cout<<a<<" ";}
        }
        cout<<endl;

    }
    return 0;
}