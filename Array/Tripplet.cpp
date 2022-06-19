#include <bits/stdc++.h>
using namespace std;
vector<int> Tripplet(int arr[],int n){
sort(arr, arr + n);
    vector<int>v;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 2; k < n; k++)
            {
                if (arr[i] + arr[j] == arr[k])
                {
                    v.push_back(arr[i]);
                    v.push_back(arr[j]);
                    v.push_back(arr[k]);
                    return v;
                }
            }
        }
    }
    return v;
}

int main()
{
    int n;
    cout << "enter N: ";
    cin >> n;
    int arr[n];
    cout << "Enter N Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int>a=Tripplet(arr,n);
    for(int i :a)cout<<i<<" ";
    return 0;
}