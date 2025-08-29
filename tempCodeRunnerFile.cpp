#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c1,c2,c3;
        cin>>c1>>c2>>c3;
       vector<int>a(5);
        for(int i=0;i<5;i++){
            cin>>a[i];
        }


        if(a[0]>c1 || a[1]>c2 || a[2]>c3){
            cout<<"NO"<<endl;
            continue;
        }
        if(c1+c3<a[0]+a[3]){
              cout<<"NO"<<endl; 
             continue;

        }
        if(c2+c3<a[2]+a[4]){
              cout<<"NO"<<endl; 
             continue;


    }
    else cout<<"YES"<<endl;
}