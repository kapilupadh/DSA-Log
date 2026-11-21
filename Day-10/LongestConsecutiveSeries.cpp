#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    unordered_set<int> arr;
    int longestConsecutive(vector<int> &nums)
    {
        // checking the vlaues
        if (nums.size() == 0)
        {
            cout << "Array is empty ";
            return 0;
        }
        // Removing Dublicates
        for (auto i : nums)
        {
            arr.insert(i);
        }

        // visiting each elements
        int maxCount = 0 ; 

        for(auto num : arr){
            if(arr.find(num-1 ) == arr.end()){
                int current = num;
                int count = 1;


                while(arr.find(current + 1) != arr.end()){
                    current++;
                    count++;
                }


               maxCount = max(maxCount , count);
            }

        }

        return maxCount ;
    }
};

int main()
{

    return 0;
}