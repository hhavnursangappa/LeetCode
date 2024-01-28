class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int num_target_met = 0;
        for (int ii=0; ii<hours.size(); ii++)
        {
            if (hours[ii] >= target)
                num_target_met++;
        }
        return num_target_met;        
    }
};