// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//      int x,y;
//      cin>>x>>y;
//      string s;
//      cin>>s;
     
   
//      if(x>=0 && y>=0){
//         for(int i=0;i<s.size();i++){
//             int a,b;
//             if(s[i]=='R'){a++;};
//             if(s[i]=='U'){b++;};
//             if(a>=x&&b>=x)cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//     }
//        else if(x<=0 && y>=0){
//         for(int i=0;i<s.size();i++){
//             int a,b;
//             if(s[i]=='L'){a++;};
//             if(s[i]=='U'){b++;};
//             if(a>=x&&b>=x)cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//     }
//        else if(x<=0 && y<=0){
//         for(int i=0;i<s.size();i++){
//             int a,b;
//             if(s[i]=='L'){a++;};
//             if(s[i]=='D'){b++;};
//             if(a>=x&&b>=x)cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//     }
//        else if(x>=0 && y<=0){
//         for(int i=0;i<s.size();i++){
//             int a,b;
//             if(s[i]=='R'){a++;};
//             if(s[i]=='D'){b++;};
//             if(a>=x&&b>=x)cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//      }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int x,y;
      cin>>x>>y;
      int ans=1, l=0,r=0,u=0,d=0;
      string s;
      cin>>s;
      for(auto c:s){
            if(c=='U')u++;
            if(c=='D')d++;
            if(c=='L')l++;
            if(c=='R')r++;
      }
          if(x>0){
            if(x>r)ans=0;
          }else{
            x=-x;
            if(x>l)ans=0;
          }
          if(y>0){
            if(y>u)ans=0;
          }else{
            y=-y;
            if(y>d)ans=0;
          }


          if(ans)cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
    }
    return 0;
}
