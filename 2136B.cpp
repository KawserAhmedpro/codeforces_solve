#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        vector<int>zero;
        
        int x=1;
        for(int i=0;i<n;i++){

            if(s[i]=='1'){
               zero.push_back(x);
               x++;
            }
            else zero.push_back(0);
        }
        
        for(int i=0;i<n;i++){
            if(zero[i]==0){
                zero[i]=x;
                x++;
            }
        }
int count =0;
int maxcount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;

                 maxcount =max(maxcount,count);
            }
           
            else count=0;
        }

if(maxcount>=k){
    cout<<"NO"<<endl;
}
else {
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<zero[i]<<" ";
    }
    cout<<endl;
}


    }
return 0;
}