//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        int cnt=0,pos=0;
        while(N){
            if(N & 1)   cnt++;
            
            if(cnt == 0) pos++;
            N >>= 1;
        }
        if(cnt != 1) return -1;
        return pos+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends