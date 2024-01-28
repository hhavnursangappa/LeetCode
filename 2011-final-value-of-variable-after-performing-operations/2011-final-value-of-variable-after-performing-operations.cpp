class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (auto a: operations)
        {
            if ((a == "--X") || (a == "X--"))
                x--;
            else if ((a == "++X") || (a == "X++"))
                x++;           
        }
        return x;
        
    }
};