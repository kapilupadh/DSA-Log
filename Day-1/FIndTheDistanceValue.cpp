#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        //sorting the arr2 
        int output = 0;
        for(int i=0 ; i< arr2.size() ; i++ ){
            for(int j = 0 ; j<arr2.size()-1 ; j++){
                
                if(arr2[j] > arr2[j+1]){
                    int temp = arr2[j];
                    arr2[j] = arr2[j+1];
                    arr2[j + 1] = temp;
                }
            }
        }
        for(int i = 0 ; i< arr1.size() ; i++ ){
            bool found = false ;
            for(int j=0 ; j<arr2.size() ; j++){
                if(arr1[i] - arr2[j] <= d ){
                    found = true;
                }
                else continue ;
            }
            if ( found == false ){
                output ++;
            }
            
        }
        return output ;
    }
    
}; 
int main() {

    Solution s;

    // 1. Define the input vectors and distance 'd'
    vector<int> arr1 = {4, 5, 8};
    vector<int> arr2 = {10, 9, 1, 8};
    int d = 2;

    // 2. Call the function and store the result
    int result = s.findTheDistanceValue(arr1, arr2, d);

    // 3. Print the outcome
    cout << "The distance value is: " << result << endl;
    
    return 0;
}
