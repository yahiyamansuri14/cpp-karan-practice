//assign first element min 
#include<iostream>
 using namespace std;
 void selectionSort(int arr[],int size){
     for(int i = 0;i<size-1;i++){
        int min_index = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index])
                min_index = j;
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
     }
 }
 void printArray(int arr[],int size){
     for(int i=0;i<size;i++)
        cout<<arr[i]<<"\t";
 }
 int main(){
     int arr[] = {20,12,10,15,2};
     int size = sizeof(arr)/sizeof(arr[0]);
     selectionSort(arr,size);
     printArray(arr,size);
     return 0;
 }