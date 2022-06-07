#include<bits/stdc++.h>
using namespace std;

bool isV(char ch){
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

string modify(string s)
{
    int i=0;
    int j=s.length()-1;
        while(i<j){
            if(isV(s[i])){
                i++;
                continue;
            }
            if(!isV(s[i])){
                j--;
                continue;
            }
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
}

int main(){
    cout<<"Result: "<<modify("sachin");
    return 0;
}