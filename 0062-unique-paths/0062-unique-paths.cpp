class Solution {
public:
    int uniquePaths(int m, int n) {
        long long res= 1;
        int N = m+n-2;
        int R = min(n-1, m-1);

        for(int i = 1; i <=R; i++){
            res = res * (N-i+1)/i;
        }
        return (int)res;
    }
};