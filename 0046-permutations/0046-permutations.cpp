class Solution {
public:
//********** Using swapping space complexity reduced
void solve(int ind,vector<vector<int>> &ans,vector<int> &nums){
    if(ind == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            solve(ind+1,ans,nums);
            swap(nums[i],nums[ind]);
        }
    
}
   
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0,ans,nums);
        return ans;

    }




    //************ using extra space
//     void solve(vector<vector<int>> &ans,vector<int> &ds,vector<int> &nums,vector<int> &freq){
//     if(ds.size() == nums.size()){
//        ans.push_back(ds);
//        return;
//     }
//     for(int i=0;i<nums.size();i++){
//         if(freq[i] == 0){
//             freq[i] =true;
//             ds.push_back(nums[i]);
//             solve(ans,ds,nums,freq);
//             ds.pop_back();
//             freq[i] = false;
//         }
//     }
// }
   
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> ds,freq(nums.size(),0);
//         solve(ans,ds,nums,freq);
//         return ans;

//     }
};