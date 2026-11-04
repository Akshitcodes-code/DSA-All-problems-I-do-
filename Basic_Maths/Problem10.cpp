#include<bits/stdc++.h>
using namespace std;

int primeUptoN(int n) {
    int count = 0;
    for(int i = 2;i<=n;i++){
        bool isPrime = true;
        for(int j = 2; j*j<=i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            count++;
        }
    }
    return count;

}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int primeCount = primeUptoN(n);
    cout << "Number of prime numbers up to " << n << " is: " << primeCount << endl;
}