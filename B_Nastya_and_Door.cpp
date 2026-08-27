// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         vector<int>a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         vector<int>peak(n);
//         peak[0]=0;
//         peak[n-1]=0;
//         for(int i=1;i<n-1;i++){
//             if(a[i]>a[i-1] && a[i]>a[i+1]){
//                 peak[i]=1;
//             }
//             else{
//                 peak[i]=0;
//             }
//         }
//         int sum=0;
//         peak[0]=0,peak[n-1]=0;
//         int l=0,r;
//         for(int i=0;i<k;i++){
//             sum+=peak[i];
//             r=i;

//         }

//         int ans=sum;
//         while(r<n-1){
//             sum-=peak[l];
//             l++;
//             r++;
//             sum+=peak[r];
//             ans=max(ans,sum);
//         }

//         cout<<ans+1<<" "<<l+1<<endl;
        
       

//     }
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> peak(n, 0);

        // Find peaks
        for(int i = 1; i < n - 1; i++){
            if(a[i] > a[i-1] && a[i] > a[i+1]){
                peak[i] = 1;
            }
        }

        int l = 0;
        int r = k - 1;

        int sum = 0;

        // Only internal elements of first window
        for(int i = l + 1; i < r; i++){
            sum += peak[i];
        }

        int ans = sum;
        int bestL = l;

        // Sliding window
        while(r < n - 1){
            l++;
            r++;

            // Remove old left-side internal element
            sum -= peak[l];

            // Add new right-side internal element
            sum += peak[r - 1];

            if(sum > ans){
                ans = sum;
                bestL = l;
            }
        }

        cout << ans + 1 << " " << bestL + 1 << endl;
    }
}