#include<bits/stdc++.h>
#include<math.h>
using namespace std;

bool isArmstrong(int n){
    int count =0;
    int copy = n,original = n;
    
    while(n>0){
        count++;
        n=n/10;
    }
    
    int sum =0;
    while(copy>0){
        int remain=copy%10;
        sum+=pow(remain,count);
        copy=copy/10;
    }
    if(sum == original) return true;
    else return false;
}

int main(){
    int n;
    cin>>n;
    if(isArmstrong(n)) cout<<"Yes";
    else cout<<"No";
}