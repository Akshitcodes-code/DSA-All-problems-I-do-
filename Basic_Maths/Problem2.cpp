#include<bits/stdc++.h>
using namespace std;

int countOddDigit(int n){
    int count = 0;
    do{
        if(n%2!=0){
            count++;
        }
        n/=10;
    }while (n>0);

    return count;

}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Number of odd digits in %d is %d", n, countOddDigit(n));
}