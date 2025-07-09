#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    map <string ,int> Map;
    for(int i=0;i<n;i++){
        cin>>s;
        Map[s]++;
        if(Map[s]>1)cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
    
}