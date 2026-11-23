#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void ReverseString(vector<char>& s)
    {
        int left = 0;
        int right = s.size() - 1;

        while (left < right)
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
int main()
{
    Solution sol;

    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    cout << "Original String: ";
    for (auto ch : s)
    {
        cout << ch;
    }

    sol.ReverseString(s);

    cout << "\nReversed String: ";
    for (auto ch : s)
    {
        cout << ch;
    }

    return 0;
}