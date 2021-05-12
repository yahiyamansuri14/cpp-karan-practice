#include<iostream>
 using namespace std;
 int main(){
     int arr[] = {1,2,3,1,1,3,4,5,6};
     int size = sizeof(arr) / sizeof(arr[0]);
     int count = 0;
     int key = 1;
     for (int i = 0; i < size; i++){
        if (arr[i] == key)
            count++;
     }
     cout<<"Frequency of element is:-"<<count;
     return 0;
 }