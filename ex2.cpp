#include <bits/stdc++.h>
using namespace std;

string sub(string& s, int i, int j ){
    string ans ;
    while(i<=j){
        ans+=s[i];
        i++;
    }
    return ans;
}

bool isPal(string &s){
    int i =0,j = s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    string s , a,b,c;
    cin>>s;
    int l = s.size();

    for(int i=0;i<l-2;i++){
        a+=s[i];
        if(isPal(a))
        for(int j = i+1;j<l-1;j++){
            b = sub(s,i+1,j);
            c= sub(s,j+1,l-1);
            if(isPal(b) && isPal(c)){
                cout<<a<<" "<<b<<" "<<c<<endl;
                return 0;
            }
        }
    }

    cout<<"not possible";
    return 0;
}