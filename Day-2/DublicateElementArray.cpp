#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    bool isFound = false;

    unordered_set<int> unArr;

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array traversal :" << endl;
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Reverse Array :" << endl;
    for (int i = size - 1; i >= 0; i--)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    for (int val : arr)
    {
        if (val == target)
        {
            isFound = true;
        }
        else
            continue;
    }
    if (isFound)
    {
        cout << "Element " << target << " is found in Array." << endl;
    }
    else
        cout << "Element " << target << " is not found in Array." << endl;

    unArr.insert(10);
    unArr.insert(10);
    unArr.insert(40);
    unArr.insert(20);
    unArr.insert(50);
    unArr.insert(20);

    for (int val : unArr)
    {
        cout << val << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {

        if (unArr.count(arr[i]))
        {
            return true;
        }
        else
        {
            unArr.insert(arr[i]);
        }
    }
    cout << "Unique elements : ";
    for (int val : unArr)
    {

        cout << val << " ";
    }
    cout << endl;

    return 0;
}