#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> ans;

        for (auto &str : strs)
        {
            string key = str;

            sort(key.begin(), key.end());

            ans[key].push_back(str);
        }

        vector<vector<string>> result;

        for (auto &an : ans)
        {
            result.push_back(an.second);
        }

        return result;
    }
};

int main()
{
    Solution s;

    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter the strings:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }

    vector<vector<string>> result = s.groupAnagrams(strs);

    cout << "\nGrouped Anagrams:" << endl;

    for (auto &group : result)
    {
        for (auto &word : group)
        {
            cout << word << " ";
        }

        cout << endl;
    }

    return 0;
}