#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,ans=0;
        cin>>n>>k;
        char s[200010];
        cin>>s;
        for(int i=0;i<n;){
            if(s[i]=='B'){
                ans++;
                i+=k;
            }
            else{
                i++;
            }
        }
        cout <<ans<<endl;


    } return 0;
}