#include<iostream>
using namespace std;

void linearSearch(int arr[], int size){
    int element,pos ,val = 0;
    cout << "Enter element : ";
    cin >> element;
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            pos = i;
            val =1;
        }
    }
    if(val == 1){
        cout << "Element found at position : "<< pos;
    }else{
        cout << "Element not found ";
    }
}
int binarySearch(int arr[], int size){
    int element;
    cout << "Enter element : ";
    cin >> element;
    int start = 0, end = size - 1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == element){
            return mid;
        } else if(arr[mid] > element){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[20], size, choice;
    cout << "Enter size : ";
    cin >> size;
    cout << "Enter array : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Enter 1 for Linear Search : " << endl;
    cout << "Enter 2 for Binary Search : " << endl;
    cin >> choice;
    switch(choice){
        case 1 : 
        linearSearch(arr, size);
        break;
        case 2 : 
        cout << binarySearch(arr, size);
        break;
        default : 
        cout << "You have entered invalid option !";
    }
}
