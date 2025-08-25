// #include <bits/stdc++.h>
// using namespace std;

// int main() {
   
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         char c;
//         cin >> n >> c;
//         string s;
//         cin >> s;

        
//         s += s;
//         int len = s.size();

      
//         vector<int> nextGreen(len, -1);
//         int nextPos = -1;

        
//         for (int i = len - 1; i >= 0; i--) {
//             if (s[i] == 'g') nextPos = i;
//             if (nextPos != -1) nextGreen[i] = nextPos - i;
//         }

       
//         int ans = 0;
//         for (int i = 0; i < n; i++) {
//             if (s[i] == c) {
//                 ans = max(ans, nextGreen[i]);
//             }
//         }

//         cout << ans << "\n";
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int l=0,r=0;
        for(int i=0;i<n;i++){
            l++;
            if(s[i]=='g')break;
        }
         for(int i=n-1;i>=0;i++){
            r++;
            if(s[i]=='g')break;
        }
        cout<<l<<" "<<r;
    }
    return 0;
}
