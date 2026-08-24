#include<bits/stdc++.h>
using namespace std;

bool  cmt(pair<int,int>&a,pair<int ,int>&b){
    if(a.second==b.second)return a.first<b.first;
    return a.second>b.second;

}

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int ,int>mp;
        for(auto i:v){
            mp[i]++;
        }

        vector<pair<int,int>>vp(mp.begin(),mp.end());
        sort(vp.begin(),vp.end(),cmt);
        while(k>0&& !vp.empty()){
            int idx=vp.size()-1;
            vp[idx].second--;
            k--;
            if(vp[idx].second==0){
                vp.pop_back();
            }

        }
        set<int >st;
         for(auto &it : vp) {
        if(it.second > 0) st.insert(it.first);
    }
    int ans=st.size();
    if(ans<=0)ans=1;
    cout<<ans<<endl;
        
    }
    return 0;
}