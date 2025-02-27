class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen; 
        int left = 0; 
        int maxLen = 0; 

        for (int right = 0; right < s.length(); right++) {
            char currentChar = s[right];

            if (lastSeen.find(currentChar) != lastSeen.end() && lastSeen[currentChar] >= left) {
            
                left = lastSeen[currentChar] + 1;
            }

            lastSeen[currentChar] = right;

            
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};