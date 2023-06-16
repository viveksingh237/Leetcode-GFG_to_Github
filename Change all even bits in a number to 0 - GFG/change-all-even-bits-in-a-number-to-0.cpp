//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int compliment(long long int n){
        if(n == 0) return 1;
        long long int x=1,ans=0;
        int i=0;
        while(i<32){
            if(!(n & 1)) ans+=x;
            x*=2;
            n >>= 1;
            i++;
        }
        return ans;
    }  
    long long int convertEvenBitToZero(long long int n) {
        bool flag=1;
        long long int temp=1,m=n;
        while(m){
            if(flag){
                long long int y=compliment(temp);
                //cout<<y<<endl;
                n &= y;
            }
            temp <<= 1;
            flag = !flag;
            m >>= 1;
        }
        return n;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.convertEvenBitToZero(n) << endl;
    }
    return 0;
}

// } Driver Code Ends