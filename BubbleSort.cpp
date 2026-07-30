#include<iostream>
using namespace std;
void Bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
        }
    }
}
} 
void Printarray(int arr[], int n){
    cout<<"The sorted array:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
   int arr[] = {4,8,2,6,4,-1,-44,7,87};
   int n = sizeof(arr) / sizeof(arr[0]);
   Bubblesort(arr,n);
   Printarray(arr,n);
}
