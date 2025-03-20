class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        int maxans = 0;
        for (int i = 0; i < s.length(); i++) {
            unordered_set<char> set;
            int j;
            for (j = i; j < s.length(); j++) {
                if (set.find(s[j]) != set.end()) { //if duplicate found update maxans (in firs test case duplicate is found at index 3 so max = max(0, 3) , hence i =1)  
                    
                    break;
                }
                set.insert(s[j]);
            }
            maxans = max(maxans, j - i);
            
        }
        return maxans;
    }
};