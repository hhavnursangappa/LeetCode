class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int b = 0;
        int e = nums.size();
        int m = (e+b)/2;
        while(b<e)
        {            
            if (nums[m] == target)
                return m;
            else if (nums[m] > target)
                e = m;
            else
                b = m+1;
            m = (e + b) / 2;
        }
        return m;
    }
    
};