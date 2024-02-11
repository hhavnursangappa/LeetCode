// class Solution {
// public:
//     int NoOfDevices(string input_str)
//     {
//         int num =0;
//         for(int ii=0; ii<input_str.size(); ii++)
//         {
//             if (input_str[ii] == '1')
//                 num++;                
//         }
//         return num;
//     }
    
    
//     int numberOfBeams(vector<string>& bank) {
//         int no_of_beams = 0;
        
//         for (int ii=0; ii<bank.size(); ii++)
//         {
//             int num_row_1 = NoOfDevices(bank[ii]);
//             if (num_row_1 !=0)
//             {
//                 for (int jj=ii+1; jj<bank.size(); jj++)
//                 {  
//                     int num_row_2 = NoOfDevices(bank[jj]);
//                     if (num_row_2 !=0)
//                     {                    
//                         no_of_beams += num_row_1 * num_row_2;
//                         break;
//                     }
//                 }
//             }
            
//         }
//         return no_of_beams;        
//     }
// };

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        if(n<2) return 0;
        vector<int>ans;

        //pushing total sum of row from 2D vector to  new 1D `ans` vector
        for(int i=0;i<n;i++){
            int sum=0;
            for(auto j: bank[i]){
                if(j=='1') sum++;
            }
            if(sum>0)  ans.push_back(sum);
        }

        if(ans.size()<2) return 0;
        int laser=0;
        
        //total possible beams can be formed in two adjacent rows
        for(int i=0;i<ans.size()-1;i++){
            laser = laser+ (ans[i]*ans[i+1]);
        }
     return laser;
    }
};