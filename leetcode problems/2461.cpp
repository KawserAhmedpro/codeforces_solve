//2461. Maximum Sum of Distinct Subarrays With Length K

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long n=nums.size(),mx=0;
        map<int,int>mp;
        long long sum= 0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            mp[nums[i]]++;
           
        }
        if(mp.size()==k){
            mx=sum;
        }
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
             mp[nums[i]]--;
             if(mp[nums[i]]==0){
                mp.erase(nums[i]);
             }
             if(i+k>=nums.size()){
                break;
             }
            sum+=nums[i+k];
             mp[nums[i + k]]++;
            if(mp.size()==k){
            mx= max(sum,mx);}
        }
        return mx;

    }
};