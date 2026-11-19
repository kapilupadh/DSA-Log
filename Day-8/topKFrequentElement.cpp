#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numsMap;
        vector<pair<int, int>> sortedNums;
        vector<int> result;

        // Getting the value and freq of each element
        for (int i = 0; i < nums.size(); i++) {
            numsMap[nums[i]]++;
        }

        // Transferring values
        for (auto it : numsMap) {
            sortedNums.push_back({it.first, it.second});
        }

        // Sorting it
        sort(sortedNums.begin(), sortedNums.end(), cmp);

        // Return the result
        for (int i = 0; i < k; i++) {
            result.push_back(sortedNums[i].first);
        }

        return result;
    }
};

int main() {
    Solution sol;

    // Sample test case
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    // Call the function and store the returned vector
    vector<int> ans = sol.topKFrequent(nums, k);

    // Print the result
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
