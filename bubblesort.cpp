#include<iostream>
 using namespace std;
  void bubbleSort(int arr[], int size){
      for(int i = 0; i<size;i++){
          for(int j=0;j<size;j++){
              if(arr[i]<arr[j]){
                  int temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp;
              }

          }
      }
  }
  void printArray(int arr[],int size){
      for(int i=0;i<size;i++)
        cout<<arr[i]<<"\t";
  }
 int main(){
     int arr[]={5,1,6,2,3,7,23,3};
     int size = sizeof(arr)/sizeof(arr[0]);
     bubbleSort(arr,size);
     printArray(arr,size);
     return 0;
 }