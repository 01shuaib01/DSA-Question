#include <iostream>
using namespace std;

int binarySearchSqrt(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e)
    {
        long long int sqr = mid * mid;
        if (sqr == n)
            return mid;

        if (sqr < n)
        {
            s = mid + 1;
            ans = mid;
        }
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n = 81;
    cout<<"ans is  "<<binarySearchSqrt(n);
    return 0;
}