#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sumOfTwoBrut(int arr[], int size)
{
    int sum = 5;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
                cout << arr[i] << arr[j] << endl;
        }
    }
}
void sumOfTwoPointer(int arr[], int size)
{

    int sum = 5;
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] == sum){
            cout << " " << arr[left] << " " << arr[right] << endl;
            break;
        }
        else if (arr[left] + arr[right] < sum)
            left++;
        else
            right--;
    }
}
int main()
{
    int arr[5] = {1, 4, 2, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumOfTwoBrut(arr, size);
    cout << "using two pointer method" << endl;
    sort(arr, arr + size);
    sumOfTwoPointer(arr, size);
    return 0;
}