#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>freq(101,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            freq[x]++;

        }
        int ans=0;
        int max_value =0;
        while(freq[max_value]>0){
            max_value++;
        }
        ans+=max_value;

        for(int i=0;i<max_value;i++){
            freq[i]--;

        }
        int last_sum=0;
        for(int i=0;i<(int)freq.size();i++){
            last_sum+=i*freq[i];
        }
        ans+=last_sum;
        cout<<ans<<endl;
    }
    return 0;
}