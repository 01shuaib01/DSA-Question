#include <iostream>
using namespace std;

int  printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    int count = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            count++;
        }
        else if (arr2[j] < arr1[i])
        {
            cout << arr2[j] << " ";
            j++;
            count++;
        }
        else
        {
            cout << arr2[j];
            j++;
            i++;
            count++;
        }
    }

    // print remaining element in the array
    while (i < m)
    {
        cout << arr1[i]<<" ";
        i++;
        count++;
    }
    while (j < n)
    {
        cout << arr2[j] << " ";
        j++;
        count++;
    }
    return count;
}


int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {2, 3, 5, 7};

    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int);

    int count = printUnion(a, b, m, n);
    cout<<endl<<"count is "<<count;

    return 0;
}