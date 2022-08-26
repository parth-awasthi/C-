#include <iostream>
using namespace std;

void linearSearch(int arr[], int size)
{
    int element, pos, val = 0;
    cout << "Enter the element:" << endl;
    cin >> element;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            pos = i;
            val = 1;
        }
    }
    if (val == 1)
    {
        cout << "Element found in the array at this position:" << pos << endl;
    }
    else
    {
        cout << "Element not found in the array!! " << endl;
    }
}

int main()
{
    int arr[20], size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    linearSearch(arr, size);
}