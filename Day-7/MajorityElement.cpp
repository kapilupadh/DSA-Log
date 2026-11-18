#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int candidate =0, count = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            if (count == 0 && candidate != nums[i])
            {
                candidate = nums[i];
                count++;
            }
            else if (candidate == nums[i])
            {
                count++;
            }
            else
                count--;
        }
        return candidate;
    }
};

int main(){

    Solution s;
    vector<int> nums;

    int len, val;

    cout << "Enter range: ";
    cin >> len; 
    for(int i = 0; i < len; i++){
        cout << "Enter value: ";
        cin >> val;
        nums.push_back(val);
    }

    int result = s.majorityElement(nums);
    cout << "The majority element is: " << result << endl;

    return 0;
}
