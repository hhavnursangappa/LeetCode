class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        // std::vector<std::vector<int>> final_res;
        
        int pair_count = 0;
        for (int ii=0; ii<nums.size(); ii++)
        {
            std::vector<int> num_pairs;
            for (int jj=ii+1; jj<=nums.size()-1; jj++)
            {
                if (nums[ii] + nums[jj] < target)
                    pair_count++;
            }
        }
        
        // std::sort(nums.begin(), nums.end());
        // for (int ii=0; ii<nums.size()-1; ii++)
        // {
        //     if (nums[ii] + nums[ii+1] < target)
        //         pair_count++;
        // }
        return pair_count;
    }
};