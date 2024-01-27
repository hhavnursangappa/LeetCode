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
    
    // int searchInsert(vector<int>& nums, int trgt) {
    //     DPSolver;
    //     int b = 0; int e = nums.size(); int m = (e+b) / 2; 
    //     while (e > b){
    //         if (nums[m] == trgt)
    //             return m; 
    //         else if (nums[m] > trgt)
    //             e = m; 
    //         else 
    //             b = m + 1; 
    //         m = (b+e)/ 2;
    //     }
    //     // if( m < nums.size() && m > )
    //     return m; 
    // }
};