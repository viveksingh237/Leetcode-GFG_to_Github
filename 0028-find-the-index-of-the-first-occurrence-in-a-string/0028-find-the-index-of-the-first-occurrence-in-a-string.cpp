class Solution {
public:
    int strStr(string haystack, string needle) {
        int ind=haystack.find(needle);
        return (ind != -1) ? ind : -1;
    }
};