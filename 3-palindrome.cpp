// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n==1)cout<<"a"<<endl;
//     if(n==2)cout<<"aa"<<endl;
//     if(n==3)cout<<"bba"<<endl;
//     if(n>3 && n%2==0){
//        n=n/2;
//        for(int i=1;i<=n;i++){
//         if(i%2!=0)cout<<"aa";
//         else cout<<"bb";
//        }
//        cout<<endl;
//     }
//     else if(n>3 && n%2!=0){
//         n=n-1;
//         n=n/2;
//           for(int i=1;i<=n;i++){
//         if(i%2!=0)cout<<"aa";
//         else cout<<"bb";
//        }
//        if(n == 'bb') cout<<"a"<<endl;
//        else cout<<"b"<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 1) cout << "a" << endl;
    else if(n == 2) cout << "aa" << endl;
    else if(n == 3) cout << "bba" << endl;
    else if(n > 3 && n % 2 == 0){
        n = n / 2;
        for(int i = 1; i <= n; i++){
            if(i % 2 != 0) cout << "aa";
            else cout << "bb";
        }
        cout << endl;
    }
    else if(n > 3 && n % 2 != 0){
        n = n - 1;
        n = n / 2;
        string last_pair = "";
        for(int i = 1; i <= n; i++){
            if(i % 2 != 0){
                cout << "aa";
                last_pair = "aa";
            }
            else{
                cout << "bb";
                last_pair = "bb";
            }
        }
        // এখন last_pair দেখে সিদ্ধান্ত নিই
        if(last_pair == "aa") cout << "b" << endl;
        else cout << "a" << endl;
    }

    return 0;
}
