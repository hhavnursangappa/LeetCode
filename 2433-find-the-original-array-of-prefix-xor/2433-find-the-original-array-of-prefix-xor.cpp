class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        std::vector<int> res;
        res.push_back(pref[0]);
        for (int ii=0; ii<pref.size()-1; ii++)
        {
            res.push_back(pref[ii] ^ pref[ii+1]);
        }
        return res;        
    }
};