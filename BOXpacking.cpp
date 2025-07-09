#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int ,int>count;
    int maxx =0;
    for(int i=0,x;i<n;i++){
        cin>>x;
        count[x]++;
        maxx =max(maxx,count[x]);
    }
    cout<<maxx<<endl;
    return 0;
}