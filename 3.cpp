#include <bits/stdc++.h>
using namespace std;

vector<string>v;

void help(string &t,int i,int j){
    if(i==j) {
       v.push_back(t);
        return;
    }
    for(int k=i;k<j;k++){
        swap(t[i],t[k]);
        help(t,i+1,j);
        swap(t[i],t[k]);
    }
}

int main(){   
    v.clear();
    string s ;
    cin>>s;
    help(s,0,s.size());
    for(string s:v){
        cout<<s<<endl;
    }
    return 0;
}