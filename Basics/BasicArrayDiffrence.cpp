#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

    
int main () {

    vector<int> arr1 = {4,9,1,5};
    int size = arr1.size();
    vector<int> arr2(size);
    int diffrence = 5;


    for(int i =0 ; i< arr1.size() ; i++){

        int temp = std::abs(arr1[i] - diffrence);
        
        arr2[i] = temp ;

    }
    cout<<"Array problems for beginners : ";
    for(int val : arr2){
        cout<< val << ",";
    }
    cout<<endl;






    for(int i=0 ; i< arr2.size() ; i++ )
    {
        for(int j = 0 ; j<arr2.size()-1 ; j++)
        {   
                if(arr2[j] > arr2[j+1])
                {
                    int temp = arr2[j];
                    arr2[j] = arr2[j+1];
                    arr2[j + 1] = temp;
                }
                
            }
        }
    cout<<"Array Shorted for beginners : ";
    for(int val : arr2){
        cout<< val << ",";
    }
    cout<<endl;
    return 0;
}