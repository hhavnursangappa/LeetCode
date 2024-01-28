class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        std::vector<int> wealth_sum;
        for(int ii=0; ii<accounts.size(); ii++)
        {
            int sum = 0;
            for (int jj=0; jj<accounts[ii].size(); jj++)
            {
                sum += accounts[ii][jj];
            }
            wealth_sum.push_back(sum);
        }
        return *max_element(wealth_sum.begin(), wealth_sum.end());
    }
};