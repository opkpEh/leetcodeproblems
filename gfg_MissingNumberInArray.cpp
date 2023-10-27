class Solution {
public:
    int missingNumber(vector<int>& array, int n) {

        sort(array.begin(), array.end());
        
        for (int i = 0; i < n - 1; i++) {
            if (array[i] != i + 1) {
                return i + 1;
            }
        }
        
        return n;
    }
};
