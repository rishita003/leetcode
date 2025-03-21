class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeenIndex;
        int maxlen = 0; 
        int l = 0;

        for(int r = 0; r<s.length(); r++){
            if(lastSeenIndex.find(s[r]) != lastSeenIndex.end())
            l = max(lastSeenIndex[s[r]] + 1, l );

            lastSeenIndex[s[r]] = r;
        maxlen = max(maxlen, r-l+1);
        }
        
        return maxlen;

    }
};