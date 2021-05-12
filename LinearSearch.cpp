#include<iostream>
#include<vector>
 using namespace std;
 void linearSearch(int arr[],int size,int key){
      bool flag = false;
        for ( int i = 0; i < size; i++){
            cout<<"iteration no:-"<<(i+1)<<endl;
            if (arr[i] == key){
                flag = true;
                break;
            }
        }
        if ( flag )
            cout<<"element found";
        else
            cout<<"element not found";
        
 }
 int main(){
     int arr [] = {5,1,7,2,4,0,9,-1};
     int key = 4;
     int size = sizeof(arr) / sizeof(arr[0]);
     linearSearch(arr,size,key);
     return 0;
 }