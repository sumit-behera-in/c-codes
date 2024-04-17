#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans =0;
    int k;
    cin>>k;
    while(k--){
        int t = 0;
        cin>>t;
        ans^=t;
    }
    cout<<ans;

    return 0;
}