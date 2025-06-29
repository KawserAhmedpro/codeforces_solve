// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//        int n=0,a,ans;
       
//        int arr[4];
//        for(int i=0;i<4;i++){
//         cin>>arr[i];
//        }
//        for(int i=0;i<4;i++){
//          a= arr[i]-arr[i+1];
//          if(a<=0){
//             a=-a;
//          }
//          n+=a;
//        }
//        ans=arr[1]+n+3;
//        cout<<ans<<endl;

//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    char arr[10];
    cin>>arr;
    int last=1,p,ans=0;

    for(int i=0;i<4;i++){
    //     int k=arr[i+1]-last;
    //     if(last=='0'){
    //         p=10;
    //     }else {p=arr[i];}
    //    ans+=k;
    //     last=p;
     int p;
     if(arr[i]=='0'){
        p=10;
     }else p=arr[i]-'0';
     int tmp=p-last;
     if(tmp<0)tmp=-tmp;
     ans+=tmp+1;
     last=p;


    }
    cout<<ans<<endl;
    }
    return 0;
}

