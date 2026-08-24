#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int minusone=0,zero=0;
        for(int i=0;i<n;i++){
        cin>>a[i];
    if(a[i]==-1)minusone++;
if(a[i]==0)zero++;}
if(minusone%2==0){
    cout<<zero<<endl;
}
else{
    cout<<2+zero<<endl;
}

    }
    return 0;
}