#include <vector>
#include <unordered_set> // Required for the hash set

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        // Create a hash set to store numbers we have seen so far
        std::unordered_set<int> seen;

        for (int num : nums) {
            // Check if the current number is already in the set
            if (seen.count(num)) {
                return true; // Found a duplicate!
            }
            // If not, add it to the set for future checks
            seen.insert(num);
        }

        return false; // No duplicates found after checking everyone
    }
};