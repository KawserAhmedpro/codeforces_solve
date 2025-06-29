#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
           int x[10],y[10];
           for(int i=0;i<4;i++){
            cin>>x[i]>>y[i];
           }
           if(x[0]==x[1]){
            int ans=abs(x[2]-x[1]);
           cout <<ans*ans<<endl;
           }
           else{
           int ans=abs(x[1]-x[0]);
           cout <<ans*ans<<endl;}

    }
    return 0;
}
