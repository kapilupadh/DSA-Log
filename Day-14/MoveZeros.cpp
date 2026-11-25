#include<iostream>
#include<vector>
using namespace std;


class Solution {
    public :
        void MoveZeros(vector<int>& nums){
            if(nums.size() <= 1 ) return ;

            int first = 0 ;
            int second = first + 1 ;


            while(second != nums.size()){
                if(nums[first] == 0 && nums[second] != 0 ){
                    swap(nums[first], nums[second]);
                    first++ ;
                    second++;
                }else if (nums[first ] == 0 && nums[second] == 0){
                    second++;
                }else {
                    first++;
                    second++;
                }
            }
        }
};



int main() {
   vector<int> nums = {0, 1, 0, 3, 12};

   Solution s;
   s.MoveZeros(nums);


    cout<<"The sorted array :";
    for(auto n : nums){
        cout<<n << " ";
    }
    cout<<endl;
    return 0 ;
}