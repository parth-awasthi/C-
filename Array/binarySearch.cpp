#include<iostream>
using namespace std;

int binarySearch(int arr[], int size){
    int element;
    int start=0,end = size-1;
    cout<<"Enter element:"<<endl;
    cin>>element;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==element){
            return mid;
        }else if(arr[mid]>element){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[20], size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<binarySearch(arr,size);
}