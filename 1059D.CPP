#include<bits/stdc++.h>
using namespace std;
using ll= long long ;

ll qry(ll type,ll l,ll r ){
    cout<< type<<" "<<l<<" "<<r<< endl;
    ll x;
    cin>>x;
    return x;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll lo=1,hi=n,left=-1;
        while(hi>=lo){
            ll mid=lo+(hi-lo)/2;
            if(qry(1,1,mid)!=qry(2,1,mid)){
                left =mid;
                hi=mid-1;

            }
            else 
            {
                lo = mid+1;

            }

        }

        ll dif= qry(2,left,n)-qry(1,left,n);
        ll right =left+dif-1;
        cout<<"! "<<left<<" "<<right<<endl;
    }
    return 0;
}
