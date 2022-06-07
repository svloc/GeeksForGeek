#include<bits/stdc++.h>
using namespace std;
string modify(string s)
        {
            int i=0, j=s.length()-1;
            while(i<j){
                while(i<j && (s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u')){
                    i++;
                }
                while(i<j && (s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u')){
                    j--;
                }
                if(i<j){
                    swap(s[i],s[j]);
                }
            }
            return s;
        }

int main(){
    string s;
    cout<<"Enter String: ";
    cin>>s;
    cout<<"Result: "<<modify(s);
    return 0;
}        