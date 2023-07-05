class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        int max=pow(2,maximumBit)-1;
        //cout<<max<<endl;
        int x=0;   
        for(auto& k:nums) x^=k;
        //cout<<x<<endl;
        for(int i=nums.size()-1;i>=0;i--){
             int temp;
             temp =x^ max; 
             //cout<<temp<<endl;
             ans.push_back(temp);
             x ^= nums[i];
             //cout<<temp<<endl;
        }
        return ans;
    }
};