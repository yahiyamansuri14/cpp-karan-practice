//elements which are not smaller than their neighbour
#include <iostream>
#include<limits.h>
using namespace std;
int linearSolution(int arr[], int size)
{
    if (arr[0] >= arr[1])
    {
        return arr[0];
    }
    if (arr[size - 1] >= arr[size - 2])
    {
        return arr[size - 1];
    }
    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i] >= arr[i - 1] && arr[i >= arr[i + 1]])
        {
            return arr[i];
        }
    }
    return INT_MIN;
}

int main()
{
    int arr[5] = {1,4,3,0,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = linearSolution(arr,size);
    if (result == INT_MIN)
        cout<<"There is no peak element ";
    else
        cout<<"peak element is "<<result;
    return 0;
}