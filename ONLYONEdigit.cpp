#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int x;
       cin>>x;
    set<char> digits;

    string s = to_string(x);
    for (char c : s) {
        digits.insert(c);  // c is '9' or '6'
    }

      cout<<*digits.begin()<<endl;
     

    
    }
    return 0;
}
