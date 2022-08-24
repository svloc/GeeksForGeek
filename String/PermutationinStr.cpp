#include<bits/stdc++.h>
using namespace std;

bool checkEqual(int arr[],int arr1[]){
    for(int i=0;i<26;i++){
        if(arr[i]!=arr1[i])
        return false;
    }
    return true;
}

bool PermutatonInStr(string s1,string s2){
   int winSize=s1.length();
   int c1[26]={0};
   int n=s2.size();
   int c2[26]={0};

   for(int i=0;i<winSize;i++){
      int index=s1[i]-'a';
      c1[index]++;
   }


   int i=0;

   while(i<winSize && i<n){
      int index=s1[i]-'a';
      c2[index]++;
      i++;
   }
   
   if(checkEqual(c1,c2))
    return 1;

   while(i<n){
    int index=s2[i]-'a';
    c2[index]++;

    int oldCharIn=c2[i-winSize]-'a';
    c2[oldCharIn]--;
    
   if(checkEqual(c1,c2))
    return 1;
    i++;
   }
   return 0;

}

int main(){
    string str1,str2;
    cout<<"Enter String: ";
    cin>>str1>>str2;

    if(PermutatonInStr(str1,str2))
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}

// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true

//make array of count1
//c1[26]=which store s1 char length.

//for start from i and i less than s1.size();
//store char index
//for ex char==b
//98-97==1;
//a=0,b=1,c=3---z=25;
//we increse count variable;


//traverse s2 str;
// s2 size is window size.
//check this window size with 
//increase the second count 

// this is check for first case, where we get at s1 in s2.
//after that checkEqul fun check for noumbr of same count for c1 and c2;


//input s1=ab s2=eidbaoo

//i<winSize==1

//we calculate index of s[i] char
//this is new index
//increse in c2++;

// for checking we required to decrease the count of previously comp
//eidba00
//e=1
//i=1
// for first time

//we required to decrease e value;
//second case
//e=0
//i=1
//d=1

//3
//i=0
//d=1
//b=1

//4
//d=0
//b=1
//a=1
//checkEqula return true for this time

//in last we are going to return false .





