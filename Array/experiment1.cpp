#include<iostream>
using namespace std;
void insert_element(int arr[], int size){
    int choice;
    cout << "Enter 1 for insert element at given idx : " << endl;
    cout << "Enter 2 for insert element at end : " << endl;
    cin >> choice;
    switch(choice){
        case 1 :
        int idx, element,i;
        cout << "Enter the idx : ";
        cin >> idx;
        cout << "Enter element : ";
        cin >> element;
        for(i = size; i > idx; i--){
            arr[i] = arr[i-1];
        }
        arr[idx] = element;
        break;
        case 2 : 
        int element1;
        cout << "Enter element : ";
        cin >> element1;
        for(int i = 0; i <= size; i++){
            if(i == size){
                arr[size] = element1;
            }
        }
        default :
        cout << "Enter invalid choice! ";
    }
    cout << "Array : ";
    for(int i = 0; i <= size; i++){
        cout << arr[i] << " ";
    }
}
void delete_elem(int arr[], int size){
    int choice;
    cout << "Enter 1 for delete element at given idx : " << endl;
    cout << "Enter 2 for delete element from given element : " << endl;
    cin >> choice;
    switch(choice){
        case 1 :
        int idx;
        cout << "Enter idx : ";
        cin >> idx;
        for(int i = idx; i < size; i++){
            arr[i] = arr[i+1];
        }
        break;
        case 2 :
        int element;
        cout << "Enter element of array which you want to delete : ";
        cin >> element;
        for(int i = 0; i < size; i++){
            if(arr[i] == element){
                for(int j = i; j < size; j++){
                    arr[j] = arr[j+1];
                }
            }
        }
        break;
        default:
        cout << "Enter invalid option !";
    }
    for(int i = 0; i < size-1; i++){
        cout << arr[i] << " ";
    }
}
int positionOfElement(int arr[], int size){
    int element, pos;
    cout << "Enter element : ";
    cin >> element;
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            pos = i + 1;
            return pos;
        }
    }
    return -1;
}
void elementOfLinear(int arr[], int size){
    int element;
    cout << "Enter element : ";
    cin >> element;
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            cout << arr[i];
        }
    
    }
    cout<<"Element not found!"<<endl;
}
int main(){
    int arr[10], size, option;
    cout << "Enter the size of arr : ";
    cin >> size;
    cout << "Enter array : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Enter 1 for Insertion at index and last Index : " << endl;
    cout << "Enter 2 for Deletion at index and by given value : " << endl;
    cout << "Enter 3 for find the location of element : " << endl;
    cout << "Enter 4 for display the element of array : " << endl;
    cin >> option;
    switch(option){
        case 1 : 
        insert_element(arr, size);
        break;
        case 2 :
        delete_elem(arr, size);
        break;
        case 3 :
        cout << positionOfElement(arr, size);
        break;
        case 4 :
        elementOfLinear(arr, size);
        break;
        default:
        cout << "Enter invalid option : ";
    }
}
