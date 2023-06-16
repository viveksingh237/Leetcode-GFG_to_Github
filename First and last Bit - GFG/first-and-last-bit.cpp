//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int onlyFirstAndLastAreSet(long long int n) { 
	    bool flag=0;
	    long long int m=n,y=n;
	    while(m/2){
	        if((n & 1) and flag) return false;
	        flag=1;
	        n>>=1;
	        m>>=1;
	    }
	    return y&1;
	}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        Solution ob;
        cout << ob.onlyFirstAndLastAreSet(n) << endl;
    }
    
return 0;
}


// } Driver Code Ends