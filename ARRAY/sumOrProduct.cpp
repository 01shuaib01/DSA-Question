//  #infosys

// some test case are fail

#include <iostream>
using namespace std;

int sumOrProduct(int n, int q)
{
    int sum = 0;
    int pro = 1;
    // sum of integers
    if (q == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
            // return n*(n+1)/2;
        }
        return sum;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            pro = pro * i;
        }
        return pro;
    }
}

int main()
{
    int n = 4;
    int q = 2;

    cout << "ans is " << sumOrProduct(n, q);
    return 0;
}