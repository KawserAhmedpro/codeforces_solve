#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=8;
        char ans='B';
        while(n--){
            vector<char>a(8);
            int crnt =0;
            for(int i=0;i<8;i++){
                cin>>a[i];
                if(a[i]=='R'){
                    crnt++;
                }

            }
            if(crnt==8)ans='R';
        }
        cout<<ans<<endl;
    }
    return 0;
}