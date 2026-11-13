#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueNums;
        for (int i = 0; i < nums.size(); i++) {
            if (uniqueNums.count(nums[i])) {
                return true;
            } else {
                uniqueNums.insert(nums[i]);
            }
        }
        return false;
    }
};

int main() {
    Solution s;
    vector<int> arr;
    int len;
    
    cout << "Enter the Array length: ";
    cin >> len;
    
    for (int i = 0; i < len; i++) {
        int val;
        cout << "Enter Value: ";
        cin >> val;
        arr.push_back(val); 
    }
    
    cout << boolalpha << "Contains duplicate: " << s.containsDuplicate(arr) << endl;
    
    return 0;
}
