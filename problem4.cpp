#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(int n) {
    int copy = n;
    int reversed = 0;
    while(copy>0){
        int remain = copy%10;
        reversed = reversed*10+remain;
        copy=copy/10;
    }
    if (reversed == n){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindrome(n)){
        cout << n << " is a palindrome number" << endl;
    }
    else{
        cout << n << " is not a palindrome number" << endl;
    }
}