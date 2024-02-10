// class Solution {
// public:
//     vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) 
//     {
//         vector<int> res;
        
//         for (int ii=0; ii<queries.size(); ii++)
//         {
//             int no_of_points = 0;
//             for(int jj=0; jj<points.size(); jj++)
//             {                
//                 double distance = sqrt(pow((points[jj][0] - queries[ii][0]),2) + pow((points[jj][1]-queries[ii][1]),2));
//                 if (distance <= queries[ii][2])
//                     no_of_points++;
//             }
//             res.push_back(no_of_points);
//         }
//         return res;
//     }
// };
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        vector<int> v;
        for(int i=0; i<q.size(); i++){
            int count=0;
            for(int j=0; j<p.size(); j++){
                int coo1 = pow(p[j][0] - q[i][0], 2);
                int coo2 = pow(p[j][1] - q[i][1], 2);
                int radius = pow(q[i][2], 2);
                if(coo1 + coo2 <= radius) count++;
            }
            v.push_back(count);
        }
        return v;
    }
};