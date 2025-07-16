#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   set< pair<string ,string> > pr;
    for(int i=0;i<n;i++){
        string x,y;
        cin>>x>>y;
        
        pr.insert({x,y});
    }
   cout <<pr.size();
   return 0;
    

}