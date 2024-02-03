class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        std::unordered_map<int, int> hash_table;
        std::vector<vector<int>> result;

        // std::sort(groupSizes.begin(), groupSizes.end())
        for(int ii=0; ii<groupSizes.size(); ii++)
        {
            hash_table[groupSizes[ii]]++;             
        }
        
        for(auto x: hash_table)
        {
            int continue_idx =0;
            for (int ii=0; ii<(x.second / x.first); ii++)
            {
                std::vector<int> vec;                
                for(int jj=continue_idx; jj<groupSizes.size(); jj++)
                {
                    if (groupSizes[jj] == x.first)
                    {
                        if (vec.size() < x.first)
                        {
                            vec.push_back(jj);
                        }                            
                        else
                        {
                            continue_idx=jj;
                            // result.push_back(vec);
                            break;
                        }
                    }
                        
                }
                result.push_back(vec);
            }
                        
        }
        return result;
        
    }
};