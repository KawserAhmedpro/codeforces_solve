// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//          int n;
//          cin>>n;
//          int s[200000];
//          for(int i=0;i<n;i++){
//             cin>>s[i];

//          }
//          vector<int>finalans;
//          for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int max=0;
//                 if(max<s[j]){
//                     max=s[j];
//                 }
//                 finalans.push_back(s[i]-max);

//             }
//          }
//          for(auto a:finalans){
//             cout<<a<<endl;
//          }
         
//     }
//     return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        b=a;
        sort(b.begin(),b.end());
        int max=b[n-1],max2=b[n-2];
        for(int i=0;i<n;i++){
            if(a[i]==max){
                cout<<a[i]-max2<<" ";
            }else
            cout<<a[i]-max<<" ";
        }
       cout<<"\n";
    }
    return 0;
}
