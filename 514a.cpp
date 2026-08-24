#include<bits/stdc++.h>
using namespace std;
int main(){
     string a;
     cin>>a;
     if(a[0]=='9'){
        for(int i=1;i<a.size();i++){
              if(a[i]>='5'){
                 a[i]=char('9'-(a[i]-'0'));
              }
              else continue;
        }
    }
        else {
        for(int i=0;i<a.size();i++){
              if(a[i]>='5'){
                a[i]=char('9'-(a[i]-'0'));
              }
              else continue;
        }
    }

 
        cout<<a<<endl;
    
   
    return 0;
     }

