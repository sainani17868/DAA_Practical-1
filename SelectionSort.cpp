#include<iostream>
using namespace std;
void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallest = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[smallest]){
               smallest = j;
                swap(arr[i],arr[smallest]);
            }
        }
    }
    cout<<"the sorted array:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {6,3,8,2,9,1,5,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr , n);
}
