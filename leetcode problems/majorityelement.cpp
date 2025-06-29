#include <iostream>
#include <vector>
#include <algorithm> // For sort()

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n / 2];
    }
};

int main() {
    Solution sol;
    int n;

    // Prompt user for the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    // Take array input from the user
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Find and display the majority element
    cout << "Majority Element: " << sol.majorityElement(nums) << endl;

    return 0;
}

