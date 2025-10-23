class Solution {
public:
    vector<vector<int>> threeSum(vector<int>&nums) {
        // Sort the array
		sort(nums.begin(), nums.end());
		
		// vector<vector<int>> output;
		set<vector<int>> s;
		int target = 0;
		
		for (int ii=0; ii<=nums.size(); ii++) {			
			int jj = ii+1;
			int kk = nums.size() -1;
			
			while (jj < kk) {
				long long total = nums[ii];
				total += nums[jj];
				total += nums[kk];				
				
				if (total == target) {
					s.insert({nums[ii], nums[jj], nums[kk]});						
					jj++;						
				}
				else if (total < target) 
					jj++;
				else
					kk--;
			}
			
		}
		// Declare the output vector an return it
		vector<vector<int>> output(s.begin(), s.end());
		return output;
    }
};