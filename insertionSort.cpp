#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
for(int i=1; i<n; i++){
    int curr = arr[i];
    int prev = i-1;
  while(prev>=0 && arr[prev]>curr){
    arr[prev+1] = arr[prev];
    prev--;
  }
  arr[prev+1] = curr;
}
cout<<"the sorted array:";
for(int i=0; i<n; i++)
cout<<arr[i]<<" ";
}


int main(){
    int arr[] = {6,3,8,2,9,1,5,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr , n);
}
