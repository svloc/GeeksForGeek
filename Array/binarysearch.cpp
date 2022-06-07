#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int k)
{
    int left = 0, mid, right = n - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
}
int main()
{
    int n, k;
    cout << "Enter the value of N: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Search Element:";
    cin >> k;
   int found= binarysearch(arr, n, k);
   cout<<"Element found at location: "<<found+1;
}