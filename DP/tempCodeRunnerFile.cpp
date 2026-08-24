#include<bits/stdc++.h>
using namespace std;
int DP[25];

int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(DP[n]!=-1)return DP[n];
    DP[n]=fibo(n-1)+fibo(n-2);
    return DP[n];
}


int main(){
    for(int i=0;i<25;i++){
        DP[i]=-1;
     cout<<fibo(6)<<endl;
    }
    return 0;

}
