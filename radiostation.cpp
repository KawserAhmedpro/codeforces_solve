#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<string,string> IP;
    string name,ip;
    for(int i=0;i<n;i++){
        cin>>name>>ip;
        IP[ip]=name;
    }
    string command;
    for(int i=0;i<m;i++){
        cin>>command>>ip;
        string nip = ip;
        nip.pop_back();
        cout<<command<<" "<<" #"<<IP[nip]<<endl;
    }
    return 0;
}