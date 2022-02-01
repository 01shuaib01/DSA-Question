
//  #Google 

#include <iostream>
using namespace std;

void getSum(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }
    int sum = min + max;
    cout << sum << endl;
}

int main()
{
    // int arr[] = {1, 2, 4, 5, 6, 6, 6};
    int arr[] = {-1, -4, 5, 8, 9, 3};
    int size = sizeof(arr) / sizeof(int);

    getSum(arr, size);
    return 0;
}