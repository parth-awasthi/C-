#include<iostream>
using namespace std;

void mergeAscending(int arr[], int s, int e) {

    int mid = (s+e)/2;

    int leftSize = mid - s + 1;
    int rightSize = e - mid;

    int leftArray[leftSize];
    int rightArray[rightSize];

    int k = s;
    for(int i = 0; i < leftSize; i++) {
        leftArray[i] = arr[k++];
    }

    k = mid+1;
    for(int i = 0; i < rightSize; i++) {
        rightArray[i] = arr[k++];
    }
    
    int i = 0;
    int j = 0;
    k = s;

    while(i < leftSize && j < rightSize) {
        if(leftArray[i] < rightArray[j]) {
            arr[k++] = leftArray[i++];
        }
        else{
            arr[k++] = rightArray[j++];
        }
    }   

    while(i < leftSize) {
        arr[k++] = leftArray[i++];
    }

    while(j < rightSize) {
        arr[k++] = rightArray[j++];
    }
}
void mergeDescending(int arr[], int s, int e) {

    int mid = (s+e)/2;

    int leftSize = mid - s + 1;
    int rightSize = e - mid;

    int leftArray[leftSize];
    int rightArray[rightSize];

    int k = s;
    for(int i = 0; i < leftSize; i++) {
        leftArray[i] = arr[k++];
    }

    k = mid+1;
    for(int i = 0; i < rightSize; i++) {
        rightArray[i] = arr[k++];
    }
    
    int i = 0;
    int j = 0;
    k = s;

    while(i < leftSize && j < rightSize) {
        if(leftArray[i] > rightArray[j]) {
            arr[k++] = leftArray[i++];
        }
        else{
            arr[k++] = rightArray[j++];
        }
    }   

    while(i < leftSize) {
        arr[k++] = leftArray[i++];
    }

    while(j < rightSize) {
        arr[k++] = rightArray[j++];
    }
}

void mergeSort1(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }
    int mid = (s+e)/2;
    mergeSort1(arr, s, mid);
    mergeSort1(arr, mid+1, e);
    mergeAscending(arr, s, e);
}
void mergeSort2(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }
    int mid = (s+e)/2;
    mergeSort2(arr, s, mid);
    mergeSort2(arr, mid+1, e);
    mergeDescending(arr, s, e);
}

int main(){
	int n, arr[100];
	cout << "Enter the size of arrya you want to sort by mergeSort : ";
	cin >> n;
	cout << "Enter the array : ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
    int choice;
    cout << "Enter 1 for sorting in ascending order: " << endl;
    cout << "Enter 2 for sorting in descending order: " << endl;
    cin >> choice;
    switch(choice){
        case 1 : 
        mergeSort1(arr, 0, n-1);
        break;
        case 2 :
        mergeSort2(arr, 0, n-1);
        break;
        default :
        cout << "You have entered an invalid option !";
    }
    cout << "Sorted Array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } cout << endl;
}
