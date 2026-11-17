#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
    
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        
        digits.push_back(0);
        digits[0] = 1;₹
        return digits;
    }
};

int main() {
    Solution s;
    vector<int> digits;
    int len;
    
    cout << "Enter range: ";
    cin >> len;
    
    for (int i = 0; i < len; i++) {
        int val;
        cout << "Enter value: ";
        cin >> val;
        digits.push_back(val); 
    }
    
    vector<int> result = s.plusOne(digits);
    
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
