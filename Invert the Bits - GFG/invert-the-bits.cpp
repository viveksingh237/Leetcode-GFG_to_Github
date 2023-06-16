//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int invertBits(long long int N)
    {   int i=0;
        long long int ans=0,x=1;
        while(i<32){
            if(!(N & 1)) ans+=x;
            x*=2;
            N>>=1;
            i++;
        }
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
        long long int N;
        cin>>N;
        Solution ob;
        cout<<ob.invertBits(N)<<"\n";
	}
} 
// } Driver Code Ends