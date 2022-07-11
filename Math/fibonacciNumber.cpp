#include <bits/stdc++.h>
using namespace std;
int FibonacciNumber(int n)
{
    if (n == 0)
        return -1;
    else if (n == 1)
        return 1;
    else
        return FibonacciNumber(n - 1) + FibonacciNumber(n - 2);
}
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Result: " << FibonacciNumber(n);
    return 0;
}