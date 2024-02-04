class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        std::unordered_map<int, std::vector<int>> hash_table;
        std::vector<vector<int>> result;
        
        for (int ii=0; ii<groupSizes.size(); ii++)
        {
            hash_table[groupSizes[ii]].push_back(ii);
            if (hash_table[groupSizes[ii]].size() == groupSizes[ii])
            {
                result.push_back(hash_table[groupSizes[ii]]);
                hash_table[groupSizes[ii]].clear();
            }
        }
        return result;

        
        
    }
};