#include <iostream>
using namespace std;

void triplateSum(int arr[], int size, int s)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << arr[i] << " " << arr[j]<<" "<<arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int s = 12;

    triplateSum(arr, size, s);
    return 0;
}