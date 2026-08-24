#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        int t1,t2;
        cin>>t1>>t2;
        int a,b,c;
        a = min(t1, t2);
        b = max(t1, t2);


        cin>>c;
        if(c<a){cout<<a-1<<endl;
           continue;
        }
         if(c>b){
            cout<<n-b<<endl;
           continue;
        }
        if(a<c && c<b){
            int mid=(a+b)/2;
            cout<<min(abs(mid-a),abs(mid-b))<<endl;
           continue;
        }

    }
    return 0;
}