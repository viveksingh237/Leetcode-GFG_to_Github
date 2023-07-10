class Solution {
public:
void solve(vector<vector<int>> &ans,vector<int> &ds,vector<int> &nums,vector<int> &freq){
    if(ds.size() == nums.size()){
       ans.push_back(ds);
       return;
    }
    for(int i=0;i<nums.size();i++){
        if(freq[i] == 0){
            freq[i] =true;
            ds.push_back(nums[i]);
            solve(ans,ds,nums,freq);
            ds.pop_back();
            freq[i] = false;
        }
    }
}
   
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds,freq(nums.size(),0);
        solve(ans,ds,nums,freq);
        return ans;

    }
};