class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> hash_map;
        int count = 0;
        
        for (int ii=0; ii<nums.size(); ii++)
        {
            hash_map[nums[ii]]++;
        }
        
        for (auto it: hash_map)
        {
            int val = it.second;
            count += (val*(val-1) / 2);
        }
        return count;
    }
};