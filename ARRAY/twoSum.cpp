

// Not optimized solution only case are run through the code.

#include <iostream>
using namespace std;

void twoSum(int arr[], int n, int target)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (temp + arr[j] == target)
            {
                cout << temp << " " << arr[j];
                arr[j] = -3432;
                cout << endl;
            }
        }
    }
    if (count == 0)
        cout << "-1"
             << " -1" ;
}

int main()
{
    int arr[] = {2, 7, 11, 13};
    int size = sizeof(arr) / sizeof(int);

    twoSum(arr, size, 16);
    return 0;
}