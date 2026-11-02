#include<bits/stdc++.h>

using namespace std;

int factorial(int n) {
    int fact = 1;
    while (n>1){
        fact *= n;
        n--;
    }
    return fact;
}


int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d", n, factorial(n));
}