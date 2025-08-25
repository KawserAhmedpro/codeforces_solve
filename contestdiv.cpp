#include<bits/stdc++.h>
using namespace  std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int >v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
    bool found =true;
    while(found){
        int target = c;
    int ans = INT_MIN;
      found = false;

    for(int num : v) {
        if(num <= target) {
            ans = max(ans, num);
            found = true;
        }
    }
      
   if (!found) break; 
    v.erase(remove(v.begin(), v.end(), ans), v.end());
    

    for(int i = 0; i < v.size(); i++) {
        v[i] *= 2;
    }
    found=false;
    for(int num : v) {
        if(num <= target) {
            
            found = true;
            break;
        }
       
    }
    }
    cout<<v.size()<<endl;
}
return 0;
}