#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0;
        int right = height.size()-1;
        int maxArea = 0;
        while (left < right)
        {
            int width = right - left ;
            int area = width * min(height[left], height[right]);

            maxArea = max(maxArea, area);

            if (height[left] < height[right])
            {
                left++;
            }
            else 
            {
                right--;
            }
        }
        return maxArea;
    }
};

int main() {
    Solution sol;
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max Area: " << sol.maxArea(heights) << endl; 
}