class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //naive approach or Brute force
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};