class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        std::vector<int> res;
        for(int ii=0; ii<words.size(); ii++)
        {
            for (char y: words[ii])
            {
                if (x == y)
                {
                    res.push_back(ii);
                    break;
                }
                    
            }
        }
        return res;
        
    }
};