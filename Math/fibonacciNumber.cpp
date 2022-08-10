#include <bits/stdc++.h>
using namespace std;
// int FibonacciNumber(int n)
// {
//     if (n <= 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return FibonacciNumber(n - 1) + FibonacciNumber(n - 2);
// }
// void AllFibonacciNum(int n){
//   for(int i=0;i<n;i++)
//   cout<<FibonacciNumber(i)<<" ";
// }
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    vector<int>v;
    // AllFibonacciNum(n);
    int a=0;
    int b=1;
    v.push_back(a);
    v.push_back(b);
    int nextNum;
    for(int i=1;i<=n;i++){
       nextNum=a+b;
       v.push_back(nextNum);
       a=b;
       b=nextNum;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}