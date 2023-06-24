//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	unsigned int ans;
    	long x=1;
    	int i=0;
    	while(i < 16){
    	    int odd= (n & 1);
    	    n >>= 1;
    	    int even= (n & 1);
    	    ans = (ans + x*even);
    	    x *= 2;
    	    //cout<< ans<<endl;
    	    ans = (ans + x*odd);
    	    //cout<< ans<<endl;
    	    n >>= 1;
    	    x *= 2;
    	    i++;
    	}
    	return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}
// } Driver Code Ends