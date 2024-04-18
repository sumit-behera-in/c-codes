#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v;

    while(true){
        int k;
        cin>>k;
        if(k==-1) break;
        v.push_back(k);
    }

    int ans =0;

    while(v.size()>1){
        int index1;
        int sum = INT_MAX;
        for(int i=1;i<v.size();i++){
            int t = v[i]+v[i-1];
            if(t<sum){
                sum = t;
                index1 = i-1;
            }
        }

        ans +=sum;

        vector<int>v2;
        for(int i =0;i<v.size();i++){
            if(i==index1){
                v2.push_back(sum);
                i++;
            }
            else{
                v2.push_back(v[i]);

            }            
        }

        v= v2;
    }

    cout << "Ans : "<<ans;

    return 0;
}