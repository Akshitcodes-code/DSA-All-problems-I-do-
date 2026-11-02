#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    do{
        int remain = n%10;
        reversed = reversed*10+remain;
        n=n/10;

    }while(n>0);

    return reversed;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reverse of %d is %d", n, reverseNumber(n));