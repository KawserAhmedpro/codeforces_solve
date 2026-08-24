#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){cout<<n<<endl;}
    else  {
    string a = to_string(n); 
    

    int len=a.size();

    if(a[len-1]>a[len-2]){
        a.erase(a.end()-1);
    }
    else a.erase(a.end()-2);
     if(a =="-0") a='0';
    
        cout<<a<<endl;
    
}
}