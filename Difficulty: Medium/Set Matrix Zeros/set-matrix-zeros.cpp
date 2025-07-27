class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        unordered_set<int>row;
        unordered_set<int>col;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                row.insert(i);
                col.insert(j);
                }
            }
        }
         for(int i=0;i<mat.size();i++)
         {
             for(auto j:col)
             {
                 mat[i][j]=0;
             }
         }
         for(int i=0;i<mat[0].size();i++)
         {
             for(auto j:row)
             {
                 mat[j][i]=0;
             }
         }
        
    }
};