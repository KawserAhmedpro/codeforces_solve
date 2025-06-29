#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
      
        cin>>n;
       

      cout<<1+ n*(n+1)/2 + (n+1)*(n+2)/2<<endl;
    }
    return 0;
}