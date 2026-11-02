#include <bits/stdc++.h>
using namespace std;


int largestDigit(int n) {
    int m_digit = 0;
    while (n>0){
        int remain = n%10;
        if(remain>m_digit){
            m_digit = remain;
        }
        n=n/10;
    }
    return m_digit;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Largest digit in %d is %d", n, largestDigit(n));
}