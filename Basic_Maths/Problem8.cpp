#include<bits/stdc++.h>
using namespace std;

// bool isPerfect(int n) {
//         vector<int> vec;
//         for (int i=1;i<n;i++){
//             if(n%i==0){
//                 vec.push_back(i);
//             }
//         }
//         int sum = 0;
//         for(vector<int>::iterator it = vec.begin(); it != vec.end();it++){
//             sum += *it;
//         }
//         if(sum == n) return true;
//         else return false;
// }

bool isPerfect(int n) {
    if(n <= 1) return false;

    int sum = 1;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            sum += i;

            if(i != n / i) {
                sum += n / i;
            }
        }
    }

    return sum == n;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPerfect(n)){
        cout << n << " is a perfect number" << endl;
    }
    else{
        cout << n << " is not a perfect number" << endl;
    }
}