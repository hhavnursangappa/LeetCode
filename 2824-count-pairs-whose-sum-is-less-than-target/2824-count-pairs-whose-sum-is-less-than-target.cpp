class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        std::vector<std::vector<int>> final_res;
        int pair_count = 0;
        for (int ii=0; ii<nums.size(); ii++)
        {
            std::vector<int> num_pairs;
            for (int jj=1; jj<=nums.size()-1; jj++)
            {
                if ((ii < jj) && (nums[ii] + nums[jj] < target))
                    pair_count++;
            }
        }
        return pair_count;
    }
};