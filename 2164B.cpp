#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int >a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=-1,x;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                x=a[j]%a[i];
                if(x==2){
                    cout<<a[i]<<" "<<a[j]<<endl;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}