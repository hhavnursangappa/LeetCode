class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector<bool> res;
        int max_val = *max_element(candies.begin(), candies.end());
        for(int ii=0; ii<candies.size(); ii++)
        {
            if (candies[ii] + extraCandies >= max_val)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
        
    }
};