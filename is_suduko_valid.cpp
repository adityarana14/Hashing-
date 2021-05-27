class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        unordered_map<int,unordered_map<int,int>> row;
        unordered_map<int,unordered_map<int,int>> column;
        unordered_map<int,unordered_map<int,int>> block;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                int val = mat[i][j];
                if(val!=0)
                {
                    row[i][val]++;
                    column[j][val]++;
                    block[(i/3)*3+j/3][val]++;
                    if(row[i][val]>1||column[j][val]>1||block[(i/3)*3+j/3][val]>1)
                    return 0;
                }
                
            }
        }
        
        
        return 1;
        
    }
};