#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> rel;

        for (int j = 0; j < nums.size(); j++)
        {
            int i = j;
            int left = i + 1;
            int right = nums.size() - 1;

            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    rel.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1])
                    {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1])
                    {
                        right--;
                    }
                }
                else if (sum < 0)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return rel ;
    }
};

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    Solution obj;

    vector<vector<int>> result = obj.threeSum(nums);

    for (auto &triplet : result)
    {
        cout << "[ ";
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}