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
           }
           else{

           c1= c1-a[0];
           c2=c2-a[1];
           c3=c3-a[2];
           if(a[3]>c1){
            a[3]=a[3]-c1;
           }else {
            a[3]=0;
           }
           if(a[4]>c2){
            a[4]=a[4]-c2;
           }else {
            a[4]=0;
           }
           int last= a[3]+a[4];
           if(c3>=last)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;

        }
           }
    return 0;
}