#include<bits/stdc++.h>
using namespace std;
string t,p;
vector<int>v;

bool CanConvert(int mid){
    vector<bool>deleted(t.length());
    for(int i=0;i<min(mid,(int)v.size());i++){
        deleted[v[i]]=true;
    }
     int crnt=0;
    for(int i=0;i<t.length();i++){
       
        if(crnt==p.length())break;
        if(!deleted[i] && t[i]==p[crnt])crnt++;
    }
    if(crnt==p.length())return true;
    return false;

}


bool pred(int mid){
    if(CanConvert(mid)) return 1;
    return 0;
}

int main(){
 cin>>t>>p;
 for(int i=0;i<t.length();i++){
    int x;
    cin>>x;
    v.push_back(x-1);
 }

  long  long l=0,r=t.length()+1;
  long long ans=0;
  while(l<=r){
    int mid =l+(r-l)/2;
    if(pred(mid)){
        ans=mid;
        l=mid+1;
    }
    else{
        r=mid-1;
    }
  }
  cout<<ans<<endl;
  return 0;


}