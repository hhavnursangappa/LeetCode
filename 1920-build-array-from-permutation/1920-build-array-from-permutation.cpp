class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        for (int ii=0; ii<nums.size(); ii++)
        {
            ans.push_back(nums[nums[ii]]);
        }
        return ans;        
    }
};