class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
		int n = nums.size();
        sort(nums.begin(), nums.end());
		int res = nums[0] + nums[1] + nums[2];
		
		for (int ii=0; ii<n; ii++){
			int jj = ii+1;
			int kk = n-1;
			
			while (jj < kk){
				long long sum = nums[ii];
				sum += nums[jj];
				sum	+= nums[kk];
				
				if (sum == target) {
					return target;
				}
				
				else if (abs(target - sum) < abs(target - res))
					res = sum;
				else if (sum < target)
					jj++;
				else
					kk--;
			}
        }
        return res; 
    }
};