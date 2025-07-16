// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, a, b;
//         cin >> n >> a >> b;
//         string s;
//         cin >> s;

//         int x = 0, y = 0;
//         string ans = "NO";

//         for (char c : s) {
//             if (c == 'N') y += 1;
//             else if (c == 'S') y -= 1;
//             else if (c == 'E') x += 1;
//             else if (c == 'W') x -= 1;

//             if (x == a && y == b) {
//                 ans = "YES";
//                 break; // Early termination
//             }
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       pair<int ,int > d, pos={0,0};
       cin>>d.first;
       cin>>d.second;
       string s;
       cin>>s;
       if(pos==d){
        cout<<"YES"<<endl;
        continue;
       } 
       string ans ="NO";
       for(int i=0;i<100;i++){
       for(auto c:s){
          if(c=='N'){pos.second++;}
          else if(c=='S')pos.second--;
          else if(c=='E')pos.first++;
          else pos.first--;
          if(pos==d){
            ans ="YES";
          }
       }

    }
    cout<<ans<<endl;
    }
    return 0;
}
