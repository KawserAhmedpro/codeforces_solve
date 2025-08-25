#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>g(n);
        for(int i=0;i<n;i++){
            cin>>g[i];

        }
        if(n==2){
            cout<<max(g[0],g[1])<<endl;
            continue;
        }
        if(n==3){
            sort(g.begin(),g.end());
                long long c1=g[2]+g[0];
                long long c2=g[2]+g[1];
                cout<<min(c1,c2)<<endl;
                continue;
        }

         sort(g.begin(),g.end());
         long long totalcost=0;
         long long c1=0;
         for(int i = 0; i < n / 2; ++i) {
        c1 += g[n - 1 - i];
    }
    if (n % 2 == 1) {
        c1 += g[n / 2];
    }

    long long c2=0;

    if(n%2==1){
        c2=g[0];
        for(int i=1;i<n;i+=2){
            c2+=g[i+1];
        }

    }
    else {
 for (int i = 0; i < n; i += 2) {
            c2 += g[i + 1];
        }
        

    }

    cout<< min(c1,c2)<<endl;




    }
    return 0;
}