#include <iostream>
#include <map>
#include <vector>
//https://leetcode.com/problems/two-sum/

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int number) {
        vector<int> result;
        std::map<int, int> hashTable;
        for (int i = 0; i < nums.size(); i++) {
            hashTable.emplace(nums[i], i);
        }
        for (int i = 0; i < nums.size(); i++) {
            int complement = number - nums[i];
            if ((hashTable.find(complement) != hashTable.end()) && (hashTable[complement] != i)) {
                result.push_back(i);
                result.push_back(hashTable[complement]);
            }
        }
        return result;
    }
};

