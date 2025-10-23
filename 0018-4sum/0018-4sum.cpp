//Optimized Approach using two pointer - O(n^3) time and O(n) space
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // Sort the array
		sort(nums.begin(), nums.end());
		
		// Declare the output vector and a set
		// vector<vector<int>> output;
		set<vector<int>> s;
		
		for (int ii=0; ii<=nums.size(); ii++) {
			for (int jj=ii+1; jj<=nums.size(); jj++) {
				int kk = jj+1;
				int ll = nums.size() -1;
				
				while (kk < ll) {
					long long total = nums[ii];
					total += nums[jj];
					total += nums[kk];
					total += nums[ll];
					
					if (total == target) {
						s.insert({nums[ii], nums[jj], nums[kk], nums[ll]});						
						kk++;
						// ll--;
					}
					else if (total < target) 
						kk++;
					else
						ll--;
				}
			}
		}
		vector<vector<int>> output(s.begin(), s.end());
		return output;
    }
};