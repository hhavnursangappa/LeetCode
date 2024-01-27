class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        // Iterate through the array and count the number of unique elements
        int result=1;
        for (int ii=1; ii<nums.size(); ii++)        
        {
            if (nums[ii] != nums[ii-1])
            {
                nums[result] = nums[ii];
                result++;
            }                
        }
        
        // Return the number of unique elements
        return result;   
    }
};