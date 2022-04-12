//
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int noofrows=matrix.size(),noofcolumn=matrix[0].size(),flag=-1;
        bool ans=false;
        int i;
        for(i=0;i<noofrows;i++)
        {
            if(matrix[i][0]>target)
            {
                flag=1;
                break;
            }
            else if(matrix[i][0]==target)
            {
                flag=2;
                break;
            }
            else
            {
              flag=0;  
            }
            
        }
        if(flag==0  )
        {
            i--;
            for(int j=0;j<noofcolumn;j++)
            {
                if(matrix[i][j]==target)
                {
                ans=true;
                    break;
                }
            }
            
        }
        else if(flag==1 && i>=1)
        {
            i--;
              for(int j=0;j<noofcolumn;j++)
            {
                if(matrix[i][j]==target)
                {
                ans=true;
                    break;
                }
            }
            
        }
        else
            if(flag==2)
            ans=true;
        
        return ans;
            
            
        
    }
};