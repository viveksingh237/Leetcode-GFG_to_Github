class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n=numRows,r;
        while(n){
            vector<int> row;
            int x=1;
            row.push_back(x);
            for(int i=1;i<n;i++){
                x = x*(n - i)/i;
                row.push_back(x);
            }
            //row.push_back(1);
            ans.push_back(row);
            n--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};