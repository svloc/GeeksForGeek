#include<bits/stdc++.h>
using namespace std;
char MaxiCharCount(string str){
    int charArr[26]={0};

    int n=str.length();
    
    int index=0;
    int ans;

    for(int i=0;i<n;i++){
      char ch=str[i];
       index=ch-'a';
       charArr[index]++;  
    }
    int maxi=-1;
    int ansIndex;

    for(int i=0;i<26;i++){
        if(maxi<charArr[i]){
            maxi=charArr[i];
            ansIndex=i;
        }

    }
    return 'a'+ansIndex;

}
int main(){
    string str;
    cout<<"Enter String: ";
    cin>>str;
    cout<<"Maximum Occurancer Char: "<<MaxiCharCount(str);
    
    return 0;
}


//create char array of size 26

// 0- a, 1-b ---z-25
//char mil gaya to count++ karege
// max count return kar denge


//input-->test 
//t =2
// e=1
//s=1
// return t

// number=116-97==19
// charArr[19]=1;

//charArr[4]=1;

//charArr[18]=1

//t
//charArr[19]=1;
//++ 
//charArr[19]=2


// for loop start from 0 to 25
//cal-->maxNumber which 2 having 19 as index

//ans is ch=19+'a'===97+19==>116
//asci value of 116===>t

// the final ans is: t;