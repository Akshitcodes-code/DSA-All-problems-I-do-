#include<bits/stdc++.h>
using namespace std;

int countdigits(int n){
    int count = 0;
    do{
        count++;
        n/=10;
    }
    while(n>0);
    return count;
}
