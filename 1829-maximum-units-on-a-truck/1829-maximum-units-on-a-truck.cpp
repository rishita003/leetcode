class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] > b[1];
        });

        int totalUnits = 0;

        for (const auto& box : boxTypes) {
            int count = min(truckSize, box[0]);  
            totalUnits += count * box[1];
            truckSize -= count;
            if (truckSize == 0) break;
        }

        return totalUnits;
    }
};
