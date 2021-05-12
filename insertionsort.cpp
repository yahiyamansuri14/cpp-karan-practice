#include<iostream>
 using namespace std;
 void printArray(int arr[],int size){
     for(int i = 0; i < size; i++)
        cout<<arr[i]<<"\t";
 }
 void insertionSort(int arr[],int size){
     for(int i=1;i<size;i++){
         int key = arr[i];
         int j = i - 1;
         
         while( key <= arr[j] && j >= 0){
             arr[j + 1] = arr[j];
             j--;
             printArray(arr,size);
        cout<<endl;
         }
         arr[j + 1] = key;
     }
 }
 
 int main(){
     int arr[]= {5,2,6,1,3};
     int size = sizeof(arr) / sizeof(arr[0]);
     insertionSort(arr,size);
     printArray(arr,size);

 }