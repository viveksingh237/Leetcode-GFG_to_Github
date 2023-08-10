//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    private:
    void Toh(int from,int to,int helper,int N,long long &ans){
        ans++;
        if(N == 1){
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            return;
        }
        Toh(from,helper,to,N-1,ans);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        Toh(helper,to,from,N-1,ans);
    }
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        long long ans = 0;
        Toh(from,to,aux,N,ans);
        return ans;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends