//ekta arry ase ,tmk bolte hbe maxx koto length er subarry ase jetate kono dublicate value nai
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int ans=INT_MIN;
    int l=0,r=0;
    map<int,int>mp;
    while(r<n){
        mp[a[r]]++;
        while(mp[a[r]]>1){
            mp[a[l]]--;
            l++;
        }
        ans=max(ans,r-l+1);
        r++;
    }
    cout<<ans<<endl;
    return 0;
}