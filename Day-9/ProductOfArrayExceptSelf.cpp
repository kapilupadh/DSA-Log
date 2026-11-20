#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public : 
        vector<int> productArray(vector<int> &nums){
            vector<int> ans(nums.size() , 1);

            int prefix =1 ;
            for(int i =0 ; i<nums.size() ; i++){
                ans[i] = prefix ;
                prefix *= nums[i];
            }

            int suffix = 1 ; 
            for(int i =nums.size()-1 ; i>= 0 ; i--){

                ans[i] *= suffix ;
                suffix *= nums[i];

            }

            return ans;
        }

};

int main () {
    int range ; 

    cout<<"enter the range of the array : ";
    cin>> range ;

    vector<int > nums ;

    for(int i =0 ; i < range ; i++){
        int val =0 ;
        cout<<"Enter the value : ";
        cin>>val ;

        nums.push_back(val);
    }

    Solution s ;

    vector<int> result =s.productArray(nums);

    cout<<"product of Array except self is : ";
    for(auto i  : result ){
        cout<< i << " ";
    }
    cout<<endl;
    return 0 ;
}