#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int a,b;
      cin>>a>>b;
      if(a>b){
        int temp=a;
        a=b;
        b=temp;
      }
      if(a%2==0){
        cout<<"YES"<<endl;
      }
      else if(b%2==0){
        if(a+a==b){
            cout<<"NO"<<endl;
        }
         else
      {cout<<"YES"<<endl;}
      }
     
      
    }
    return 0;
}