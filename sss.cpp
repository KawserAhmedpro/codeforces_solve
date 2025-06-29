#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int x,y;
        cin>>x>>y;
        int pr=(x+y)%2,ok=0;
        for(int i=0;i<k;i++){
            cin>>x>>y;
            if((x+y)%2==pr){
                ok=1;

            }
        }
        if(!ok)cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}