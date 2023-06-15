//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {    
            string ans;
            set<char> AA,BB;
            map<char,int> mp;
            for(auto x : A)
            AA.insert(x);
            for(auto x : B)
            BB.insert(x);
            
            for(auto& x:AA)
            mp[x]++;
            for(auto& x:BB)
            mp[x]++;
            
            for(auto x: mp){
                if(x.second ==1) ans.push_back(x.first);
            }
            
            if(ans.size()== 0) return "-1";
            return ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends