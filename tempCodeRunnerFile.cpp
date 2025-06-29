#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
       
        cin>>n>>m;
         vector<int> a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int tsondo =0;
        for(int i=0;i<n;i++){
            tsondo=tsondo+a[i];
        } 
         int tenzing =0;
        for(int i=0;i<m;i++){
            tenzing=tenzing+b[i];
        } 
        if(tsondo>tenzing)cout<<"Tsondu"<<endl;
        else if(tsondo==tenzing)cout<<"Draw"<<endl;
        else cout<<"Tenzing"<<endl;
    } 
    return 0;
}