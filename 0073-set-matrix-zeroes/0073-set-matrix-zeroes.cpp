class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int n=matrix.size(),m=matrix[0].size();
        // vector<pair<int,int>> ind;
        // for(int i=0;i<n;i++){        //saving indexes in vector where 0
        //     for(int j=0;j<m;j++){
        //         if(matrix[i][j] == 0)
        //         ind.push_back({i,j});
        //     }
        // }
        // vector<int> row(m,0);
        // for(int i=0;i<ind.size();i++){   //replacing row with zero vector
        //     matrix[ind[i].first] = row;
        // }
        // for(int i=0;i<ind.size();i++){
        //     for(int j=0;j<n;j++){         // replacing with zero for columns
        //         matrix[j][ind[i].second] =0;
        //     }
        // }


        // 
        
        //**** without using extra space

        int col0=1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    if(j != 0)
                    matrix[0][j] =0;
                    else
                    col0 = 0;
                }
            }
        }

        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j] != 0){
                if(matrix[0][j] == 0 or matrix[i][0] == 0)
                matrix[i][j] =0;
            }
            }
        }
        if(matrix[0][0] == 0){
            for(int i=0;i<matrix[0].size();i++)
            matrix[0][i]=0;
        }

        if(col0 ==0){
            for(int i=0;i<matrix.size();i++)
            matrix[i][0] = 0;
        }

    }
};