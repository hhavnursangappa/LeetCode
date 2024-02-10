class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) 
    {
        vector<int> res;
        
        for (int ii=0; ii<queries.size(); ii++)
        {
            int no_of_points = 0;
            for(int jj=0; jj<points.size(); jj++)
            {                
                double distance = sqrt(pow((points[jj][0] - queries[ii][0]),2) + pow((points[jj][1]-queries[ii][1]),2));
                if (distance <= queries[ii][2])
                    no_of_points++;
            }
            res.push_back(no_of_points);
        }
        return res;
    }
};