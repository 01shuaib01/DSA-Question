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

double morePrecision(int n, int precision, int tempSol)
{
    double fact = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        fact = fact / 10;
        for (double j = ans; j * j < n; j = j + fact)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 37;
    int tempSol = binarySearchSqrt(n);
    cout << "ans is " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}