#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.empty())
            return {};

        auto difference = 0;
        unordered_map<int,int> table;
        
        for(auto i=0;i<nums.size();++i)
        {
            difference = target - nums[i];

            if(table.find(difference) != table.end())
                return {table[difference], i};
            else
                table[nums[i]] = i;
        }

        return {};

    }
};
