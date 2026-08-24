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
        int firstparity =a[0]%2;
        bool same =true;
        for(int i=0;i<n;i++){
            if(a[i]%2!= firstparity){
                same= false;
                break;
            }
        }

        if(same==true){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else {
            sort(a.begin(),a.end());
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;

        }
    }
    return 0;
}