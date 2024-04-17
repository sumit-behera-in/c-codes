#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k ;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int t  ;
        cin>>t;
        arr.push_back(t);
    }
    cin >>k;

    vector<int>ans = arr;
    for(int i=0;i<n;i++){
        ans[(i+k)%n] = arr[i];
    }

    cout <<"\n\n\n\n\n answer is" << endl;

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}