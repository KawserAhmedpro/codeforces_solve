#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==y){
            cout<<"YES"<<endl;
            break;
        }
        if(y>x){
            cout<<"NO"<<endl;
            break;

        }
        else 
    for(int i=0;i<x;i++){
        if(y*i>x){
            cout<<"NO"<<endl;
            break;
        }
        else if(y*i==x){
            cout<<"YES"<<endl;
            break;
        }
    }
    }
    return 0;
}  