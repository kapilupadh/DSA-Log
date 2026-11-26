#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> TwoSum(vector<int> &numbers, int target)
    {
        int first = 0;
        int last = numbers.size()-1;

        while (first < last)
        {
            int sum = numbers[first] + numbers[last];
            if (sum == target)
            {
                return {first + 1, last + 1};
            }
            else if (sum > target)
            {
                last--;
            }
            else
            {
                first++;
            }
        }
        return { -1 , -1 };
    }
};

int main()
{
    Solution sol;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.TwoSum(numbers, target);

    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
