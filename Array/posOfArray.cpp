#include<iostream>
using namespace std;

int positionOfElement(int arr[], int size){
    int element, pos;
    cout<<"Enter the element: ";
    cin>>element;
    for(int i=0; i<size; i++){
        if(arr[i]==element){
            pos= i+1;
            return pos;
        }
    }
    return -1;
}

int main()
{
    int arr[10], size;
    cout<<"Enter the element: ";
    cin>>size;
    cout<<"Enter the array:";
    for(int i=0;i<size; i++){
        cin>>arr[i];
    }
    cout<<positionOfElement(arr,size);
}