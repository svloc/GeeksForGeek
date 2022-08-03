#include<bits/stdc++.h>
using namespace std;

int UnaffectedChar(string dataStream){
 transform(dataStream.begin(),dataStream.end(),dataStream.begin(),::tolower);
 int c=0;
 int n=dataStream.length();
 int freq[256] = {0};

 for(int i=0;i<n;i++){
      freq[dataStream[i]]++;
 }
  for(int i = 0; i < 256; i++)
    {
        if(freq[i] == 1)
        {
          c++;
        }
    }
    return c;
}
int main(){
   string str;
   cout<<"Enter String: ";
   cin>>str;
   cout<<"Result: "<<UnaffectedChar(str);
}