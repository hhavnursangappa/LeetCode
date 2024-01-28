class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        
        for (int ii=0; ii<n; ii++)
        {
            res.push_back(nums[ii]);
            res.push_back(nums[ii+n]);
        }
        return res;
        
    }
};