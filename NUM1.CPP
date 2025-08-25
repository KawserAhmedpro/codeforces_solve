#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>count;
        bool dublicate=false;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            count[a]++;
            if(count[a]>1){
                dublicate=true;
            }
        }
        if(dublicate)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}