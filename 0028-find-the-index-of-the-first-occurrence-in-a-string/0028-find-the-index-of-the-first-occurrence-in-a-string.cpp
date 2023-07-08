class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=haystack.size(), n2=needle.size();
        if(n1 < n2) return -1;
        if(n1 == n2){
            if( haystack == needle) return 0;
            else return -1;
        }
        for(int i=0;i<n1-n2+1;i++){
            if(haystack.substr(i,n2) == needle)
            return i;
        }
        return -1;
    }
};