#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map< long ,long>mp;
        for(int i=0;i<n*2;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int ans=0,bias=0,subbias=0;
        for(auto& it:mp){
            if(it.second & 1){
                //odd-bijor
                ans+=1;
                subbias++;

            }
            else{
                int half=it.second/2;
                if(half &1){
                    ans+=2;

                }
                else {
                    ans+=2;
                    bias^=1;
                }

            }

        }
        if(subbias>=2){
            bias=0;
        }
        cout<<ans-(bias*2)<<endl;
    }
    return 0;
}