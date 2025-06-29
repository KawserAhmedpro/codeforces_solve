#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int a,sum=0;
       cin>>a;
       int arr[a];
       for(int i=0;i<a;i++){
        cin>>arr[i];
        sum=sum+arr[i];
       }
       if(sum%2==0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
