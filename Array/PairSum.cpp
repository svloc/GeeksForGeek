#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> PairSum(int arr[],int n,int s){
  vector<vector<int>>ans;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==s){
            vector<int>temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp);
        }
    }
  }
  sort(ans.begin(),ans.end());
return ans;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array elelment: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cout<<"Enter S: ";
    cin>>s;
    vector<vector<int>>A=PairSum(arr,n,s);
    for( vector<vector<int>>::iterator i = A.begin() ; i != A.end(); i++ )
{
    for( vector<int>::iterator j = i->begin(); j != i->end(); j++ )
    {
        std::cout<<*j<<" ";
    }
    cout<<endl;
}

    return 0;
}