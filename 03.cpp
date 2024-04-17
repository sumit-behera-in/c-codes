#include <bits/stdc++.h>
using namespace std;

bool pali(string s){
    int i =0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    string s,a,b,c;
    cin>>s;
    int l = s.size();
    for(int i=1;i<l-2;i++){
        a=s.substr(0,i);
        if(pali(a))
            for(int j=1;j<l-i;j++)
        {
            b=s.substr(i,j);c=s.substr(i+j,l-i-j);
            if(pali(b)&&pali(c))
            {
                cout<<a<<endl<<b<<endl<<c;return 0;
            }
        }
    }

    cout<<"not possible";
}