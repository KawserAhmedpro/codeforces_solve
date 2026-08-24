#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n<m){
    cout << (n % 2 ? "Akshat\n" : "Malvika\n");
}
    else{
        cout << (m % 2 ? "Akshat\n" : "Malvika\n");

    }
    return 0;
}