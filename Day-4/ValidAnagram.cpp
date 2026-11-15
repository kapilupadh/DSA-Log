#include<iostream>
#include<unordered_map>
using namespace std ;


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int > checkChar;
        if(s.length() != t.length() ){
            return false ;
        }
        else {
            for(auto i : s){
                checkChar[i]++;
            }
            for(auto i : t){
                if(checkChar[i] == 0){
                    return false;
                }
                checkChar[i]--;
            }
            return true;
        }
        return {};
    }
};



int main () {
    string str1 ,str2;
    cout<<"Enter the FIrst String:";
    cin>>str1;
    cout<<"Enter the Second String :";
    cin>>str2;


    Solution s ;

    auto result = s.isAnagram(str1, str2);

    if(result){
        cout<<"Valid Anagram ."<<endl;
    }
    else {
        cout<<"Invalid Anagram ."<<endl;
    }

    return 0 ;
}