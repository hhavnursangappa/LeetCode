class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int pair_count = 0;
        for (int ii=0; ii<nums.size(); ii++)
        {
            for (int jj=ii+1; jj<=nums.size()-1; jj++)
            {
                if (nums[ii] + nums[jj] < target)
                    pair_count++;
            }
        }
        return pair_count;
    }
};