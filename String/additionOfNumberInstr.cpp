#include<bits/stdc++.h>
using namespace std;

int SumOfNum(string str){
  int sum=0;
  for(int i=0;str[i]!='\0';i++){
    if(str[i]>='0' && str[i]<='9'){
       sum+=atoi(str[i].c_str());
    }
  }
  return sum;
}


int main(){
    string str="@1,2,4s3chin";
    // cout<<"Enter String: ";
    // cin>>str;

    cout<<"result: "<<SumOfNum(str);

    return 0;
}