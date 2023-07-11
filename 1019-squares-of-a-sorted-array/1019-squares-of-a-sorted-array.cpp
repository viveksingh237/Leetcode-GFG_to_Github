class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //*******Brute force
        // vector<int> ans(nums.size(),0);
        // for(int i = 0;i < nums.size();i++)
        // ans[i] = nums[i]*nums[i];
        // sort(ans.begin(),ans.end());
        // return ans;
        

        vector<int> ans;
        for(int i = 0,j = nums.size()-1;i <= j;){
            if(abs(nums[i]) >= abs(nums[j])){
                ans.push_back(nums[i] * nums[i]);
                i++;
            }
            else{
                ans.push_back(nums[j] * nums[j]);
                j--;
            }
        }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};