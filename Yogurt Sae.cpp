#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n >> a >>b;
        if(a<(2*b)){
            
            cout<<n*a;

        }
        else {
            int c,d;
            c=n%2;
            d= ((n-(n%2))*a+((n%2)*b));
            cout<<d;



        }
    }
    return 0;
}