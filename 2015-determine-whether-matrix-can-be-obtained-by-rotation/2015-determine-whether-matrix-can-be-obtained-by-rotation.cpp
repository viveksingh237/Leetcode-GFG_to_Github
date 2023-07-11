class Solution {
public:
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
        int x=0;
        int n=matrix.size();
        while(x < 4 and matrix != target){
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++)  // transpose
            swap(matrix[i][j],matrix[j][i]);
        }
        
         for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        x++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        return matrix == target;

        //****** using extra space
// int x=0;
// int n = matrix.size();
// vector < vector < int >> rotated = matrix;
// while( x < 4 and rotated != target){
//         matrix = rotated;
//     for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//         rotated[j][n - i - 1] = matrix[i][j];
//     }
//     }
//     x++;
// }
//     return rotated == target;
    }
};