class Solution {
public:
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
        // int x=0;
        // int n=mat.size();
        // while(x < 1){
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++)  // transpose
        //     swap(mat[i][j],mat[j][i]);
        // }
        
        //  for(int i=0;i<n;i++){
        //     for(int j=0;j<n/2;j++)  // reversing the rows
        //     swap(mat[i][j],mat[i][n-j-1]);
        // }
        // x++;
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //     cout<<mat[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // return mat == target;
int x=0;
int n = matrix.size();
vector < vector < int >> rotated = matrix;
while( x < 4 and rotated != target){
        matrix = rotated;
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        rotated[j][n - i - 1] = matrix[i][j];
    }
    }
    x++;
}
    return rotated == target;
    }
};