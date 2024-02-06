class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        
        std::unordered_map<int, int> hash_map;
        int max_freq=0;
        for (int ii=0; ii<nums.size(); ii++)
        {
            hash_map[nums[ii]]++;
            max_freq = max(max_freq,  hash_map[nums[ii]]);
        }
        
        vector<vector<int>> ans(max_freq);       
        
        for (int kk=0; kk<nums.size(); kk++)
        {
            for (int jj=0; jj<max_freq; jj++)
            {
                if (std::find(ans[jj].begin(), ans[jj].end(), nums[kk]) == ans[jj].end())
                {
                    ans[jj].push_back(nums[kk]);
                    break;
                }
            }
        }           
        return ans;
    }
};