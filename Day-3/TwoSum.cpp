#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map <int, int> numsMap; 

        for(int i = 0;  i<nums.size(); i++){
            int current = nums[i];
            int partner = target - current ;

            if(numsMap.count(partner)){
                return {numsMap[partner], i};
            }
            else numsMap.emplace(current , i );
        }
    }
};

int main()
{
    Solution solver;

    int range  = 0;
    vector<int> nums ;
    cout<<"Enter the range :";
    cin>> range;

    for(int i =0 ; i<range ; i++){
        int val ;
        cout<<"Enter "<< i+1 <<" value :";
        cin>> val;
        nums.push_back(val);
        }
    int target ;
    cout<<"Enter the target :";
    cin>>target ;

   
    vector<int> result = solver.twoSum(nums, target);

    
    if (result.size() == 2) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
