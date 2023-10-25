#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        vector<int> ans;
        long long currentSum = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            currentSum += arr[right];

            while (currentSum > s) {
                currentSum -= arr[left];
                left++;
            }

            if (currentSum == s) {
                ans.push_back(left + 1); 
                ans.push_back(right + 1); 
                return ans;
            }
        }

        ans.push_back(-1); 
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> result = sol.subarraySum({1, 2, 3, 7, 5}, 5, 12);

    if (result[0] == -1) {
        cout << "No subarray found." << endl;
    } else {
        cout << "Subarray found from index " << result[0] << " to " << result[1] << endl;
    }

    return 0;
}
