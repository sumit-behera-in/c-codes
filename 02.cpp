#include <bits/stdc++.h>
using namespace std;

int cheak(int i){
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    while(i>0){
        if(arr[i%10]>0) return 0;
        arr[i%10]++;
        i/=10;
    }
    return 1;
}

int main(){

    int a,b;
    cin>>a>>b;

    int ans =0;

    for(int i =a;i<=b;i++){
        ans +=cheak(i);
    }

    cout<<"Ans :"<<ans;

    return 0;
}