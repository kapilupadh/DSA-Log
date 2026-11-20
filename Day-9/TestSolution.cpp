#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> productArray(vector<int> &nums)
    {
        // nums = [1, 2, 3, 4]
        vector<int> result(nums.size(), 1);

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (j == i) continue;

                result[i] *= nums[j];
            }
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    Solution obj;
    vector<int> result = obj.productArray(nums);

    cout << "Output: ";
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}