class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //1.naive approach is to rur two loops and check for enery pair

        ///2.*********Uasing Binary search for (target -each element)******
        
        //3 Using hasing or Map
         map<int, int> mp;
         for(int i = 0;i < nums.size();i++){
             int tempTarget = target - nums[i];
             
             if(mp.find(tempTarget) != mp.end()){
                 return {i, mp[tempTarget]};
             }
             mp[nums[i]] = i;
         }

        return {-1,-1};
    }
};