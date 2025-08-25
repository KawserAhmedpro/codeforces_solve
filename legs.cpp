// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,a=0,b=0;
//         cin>>n;
//         if(n<=4)cout<<'1'<<endl;
//         else if (n%4==0){
//             a=n/4;
//             cout<<a<<endl;
//         }
//         else if(n%4!=0){
//             b=n/4+1;
//             cout<<b<<endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;

    while (tc--){
        int n;
        cin >> n;

        cout << (n + 2) / 4 << "\n";
    }
}