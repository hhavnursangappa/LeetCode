class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for (int ii=0; ii< 2 * nums.size(); ii++)
        {
            ans.push_back(nums[ii % n]);            
        }
        return ans;
    }
};