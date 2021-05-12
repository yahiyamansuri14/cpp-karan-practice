#include <iostream>
using namespace std;
int binSearch(int arr[], int size, int key)
{
    int found_index = -1;
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        //int mid = left + (right - left) / 2;
        int mid = ( left + right ) / 2;
        cout<<mid<<"\t";
        if (arr[mid] == key){
            found_index = mid;
            break;
        } else if (key < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return found_index;
}
int main()
{

    int arr [] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    int result = binSearch(arr, size, key);
    if (result == -1){
        cout<<"element not found";
    }else{
        cout<<"element found at index"<<result;
    }
    /* if(result)
        cout<<"element found";
    else
        cout<<"element not found";
 */
    return 0;
}