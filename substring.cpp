#include<bits/stdc++.h>
using namespace std;

int n,arr[15];
vector<int> crntsubset;
void gen(int idx){
    //base case
    if(idx==n){
     for(int a :crntsubset){
        cout<<a<<" ";
     }
     cout<<endl;
     return;
    }
    //function body
    //dont take
    gen(idx+1);
    //take arr[idx]
    crntsubset.push_back(arr[idx]);
    gen(idx+1);
    crntsubset.pop_back();



}



int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    gen(0);
}