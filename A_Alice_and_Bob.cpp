#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
       vector<int> less, high;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if (x > a) {
        high.push_back(x);   
    } else if (x < a) {
        less.push_back(x);  
    }
   
}

if (less.size() > high.size()) {
    cout << a - 1 << endl;
} else {
    cout << a + 1 << endl;
}
    }

    return 0;
}