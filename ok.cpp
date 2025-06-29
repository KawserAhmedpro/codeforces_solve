// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//           int n;
//           cin>>n;
//           int arr[n];
//            for(int i=0;i<n;i++){
//             cin>>arr[i];
//            } 
//            int a=0;
//            for(int i=0;i<=n;i++){
//             if(arr[i]==(i+1)){
                
//                 a=a+1;
//             }
//            }
//            cout<<(a+1)/2<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,cnt=0;
       cin>>n;
       for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x==i)cnt++;
       }
       cout<<(cnt+1)/2<<endl;
    }
    return 0;
}
