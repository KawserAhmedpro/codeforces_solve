#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int ,int>mp;
        for(int x:a){
            mp[x]++;
        }
        vector<int >freq;
        for(auto &p :freq) freq.push_back(mp.second);

        int ans=0;
        for(int i=1;i<= *max_element(freq.begin(),freq.end());i++){
            int cur=0;
            for(int x:freq){
                cur+= min(x,i);
            }
            if(cur%i==0)ans =max(ans,cur);
        }
        cout<<ans<<endl;
        return 0;
        
        
    }
}