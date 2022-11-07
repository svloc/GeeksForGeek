#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>>gh;
    void AddEdge(int u,int v,bool dir){
        gh[u].push_back(v);
        if(dir==0)
        gh[v].push_back(u);
    }
    void printVal(){
        for(auto i:gh){
            cout<<i.first<<"-->";
            for(auto j :i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};
int main(){
    graph obj;
    int n;
    cout<<"Enter Node: ";
    cin>>n;
    int m;
    cout<<"Enter Edge: ";
    cin>>m;
    cout<<"Enter Value: ";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        obj.AddEdge(u,v,0);
    }
    obj.printVal();

    return 0;
}