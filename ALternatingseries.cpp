#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
      
        cin>>n;
          int num=n;
        vector<int > arry;

        if(n==2){
          cout<<-1<<" "<<2<<endl;
        }
       
        if(n>2&&n%2!=0){
        while(arry.size()<n){
           
            arry.push_back(-1);
            if(arry.size()<n){
                arry.push_back(3);
                
            }
            }
        }



         if(n>2&&n%2==0){
        while(arry.size()<n-1){
           
            arry.push_back(-1);
            if(arry.size()<n-1){
                arry.push_back(3);
                
            }
            }
            arry.push_back(2);
        }


         for(auto c:arry){
                cout<<c<<" ";
            }
        cout<<endl;
    }
    return 0;
}
