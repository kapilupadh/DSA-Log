#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public : 
        vector<int> getConcatenation(vector<int>& nums){
            vector<int> ans;
            ans.reserve(nums.size() * 2);

            for(auto i : nums){
                ans.push_back(i);
            }
            for(auto i : nums){
                ans.push_back(i);
            }

            return ans;
        }
};

int main () {
    Solution s ;    
    int len;
    vector<int> nums;

    cout<<"enter the array range : ";
    cin>>len;
    nums.reserve(len);

    for(int i = 0;  i<len ; i++){
        int val ; 
        cout<<"Enter value :";
        cin>>val ;

        nums.push_back(val);

    }

    auto val = s.getConcatenation(nums);
    cout<<"Output :";
    for(auto i : val ){
        cout<< i <<" " ;
    }

    return 0;
}