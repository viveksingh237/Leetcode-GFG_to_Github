class Solution {
public:
    int trap(vector<int>& arr) {
          vector<int> prf,suf;
          int maxi = 0;
        for(auto& x : arr){
            maxi = max(maxi,x);
            prf.push_back(maxi);
        }
        maxi = 0;
        for(int  i = arr.size() - 1;i >= 0;i--){
            maxi = max(maxi,arr[i]);
            suf.push_back(maxi);
        }
        reverse(suf.begin(),suf.end());
        int ans = 0;
        for(int i = 1; i < arr.size() - 1;i++){
             int mini = min(prf[i - 1],suf[i + 1]);
             ans += max(0, mini - arr[i]);
        }
        return ans;
    }
};