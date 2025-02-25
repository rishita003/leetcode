class Solution {
public:
    string longestNiceSubstring(string s) {
        function<string(string&, int, int)> divideAndConquer =
            [&](string& s, int start, int end) -> string {
            if (start >= end) {
                return "";
            }

            unordered_set<char> chars;
            for (int i = start; i < end; i++) {
                chars.insert(s[i]);
            }

            for (int i = start; i < end; i++) {
                char c = s[i];
                if (chars.find(toupper(c)) == chars.end() ||
                    chars.find(tolower(c)) == chars.end()) {

                    string left = divideAndConquer(s, start, i);
                    string right = divideAndConquer(s, i + 1, end);

                    return left.length() >= right.length() ? left : right;
                }
            }

            return s.substr(start, end - start);
        };

        return divideAndConquer(s, 0, s.length());
    }
};