class Solution {
public:
    int NoOfDevices(string input_str)
    {
        int num =0;
        for(int ii=0; ii<input_str.size(); ii++)
        {
            if (input_str[ii] == '1')
                num++;                
        }
        return num;
    }
    
    
    int numberOfBeams(vector<string>& bank) {
        int no_of_beams = 0;
        
        for (int ii=0; ii<bank.size(); ii++)
        {
            int num_row_1 = NoOfDevices(bank[ii]);
            if (num_row_1 !=0)
            {
                for (int jj=ii+1; jj<bank.size(); jj++)
                {  
                    int num_row_2 = NoOfDevices(bank[jj]);
                    if (num_row_2 !=0)
                    {                    
                        no_of_beams += num_row_1 * num_row_2;
                        break;
                    }
                }
            }
            
        }
        return no_of_beams;        
    }
};