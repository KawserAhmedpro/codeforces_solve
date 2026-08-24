#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int b=a[0]*2-1;
        int ans=0;
        for(int i=0;i<n;i++){
            ans+= (a[i]+b-1)/b -1;//ceil value ta nisi,ceil() er maddhomeo nite partam ,but manually nisi
        }
        cout<<ans<<endl;
    }
    return 0;
}