#include<bits/stdc++.h>
using namespace std;

char firstRep(string str){
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j])
            return str[i];
        }
    }
    return '#';
}

int main(){
    string str;
    cout<<"Enter String: ";
    cin>>str;

    char res=firstRep(str);
    if(res=='#')
    cout<<"-1";
    else
    cout<<res<<"\n";
    return 0;

}