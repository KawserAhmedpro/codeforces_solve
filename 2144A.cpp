#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n-1;i++){


            for(int j=i+1;j<n;j++){
                long long s1=0;
                for(int k=0;k<i;k++){
                    s1+=a[k];
                }
                s1%=3;
                long long s2=0;
                for(int k=i;k<j;k++){
                    s2+=a[k];
                }
                s2%=3;
                long long s3=0;
                for(int k=j;k<n;k++){
                    s3+=a[k];
                }
                s3%=3;


             if((s1==s2 && s2==s3)|| (s1!=s2 && s2!=s3 && s1!=s3)) {
                
                cout<<i<<" "<<j<<endl;
                continue;
             

            }
        }
    }
    cout<<"0 0"<<endl;
   

}

  return 0;
}