#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter Number: ";
    cin>>number;

    int rev=0;
    while (number>0)
    {
       rev=rev*10+number%10;
       number=number/10;
     
    }
      if(rev==number){
          cout<<"Number is palindrom..";
      }
      else{
          cout<<"dhgdc";
      }

    return 0;
}