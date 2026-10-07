#include <algorithm>
#include <vector>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty())
            return false;
        vector<int> nums2 = nums;

        sort(nums2.begin(), nums2.end());

        for(auto it = 0; it < nums2.size()-1;it++)

            if(nums2[it] == nums2[it + 1]) {
                return true; 
            }

        return false;
    }
};