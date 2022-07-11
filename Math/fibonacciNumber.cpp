#include <bits/stdc++.h>
using namespace std;
int FibonacciNumber(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return FibonacciNumber(n - 1) + FibonacciNumber(n - 2);
}
void AllFibonacciNum(int n){
  for(int i=0;i<n;i++)
  cout<<FibonacciNumber(i)<<" ";
}
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    AllFibonacciNum(n);
    return 0;
}