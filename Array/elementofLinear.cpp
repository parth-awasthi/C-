#include<iostream>
using namespace std;

void elementOfLinear(int arr[], int size){
    int element;
    cout<<"Enter the element: ";
    cin>>element;
    for(int i=0;i<size; i++){
        if(arr[i]==element){
            cout<<arr[i];
        }
    }
}
int main(){
    int arr[10], size;
    cout<<"Enter the element: ";
    cin>>size;
    cout<<"Enter the array:";
    for(int i=0;i<size; i++){
        cin>>arr[i];
    }
elementOfLinear(arr,size);
}