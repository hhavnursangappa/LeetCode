class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        std::vector<int> x_vec;
        for (int ii=0; ii<points.size(); ii++)
        {
            x_vec.push_back(points[ii][0]); 
        }

        std::sort(x_vec.begin(), x_vec.end());
        int max_width = 0;
        for (int ii=0; ii<x_vec.size()-1; ii++)
        {
            max_width = std::max(max_width, x_vec[ii+1] - x_vec[ii]);
        }

        return max_width;
    }
};