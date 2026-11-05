#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int n){
    vector<int> divs;
    for(int i =1; i <=n; i++){
        if (n%i == 0){
            divs.push_back(i);
        }
    }
    return divs;
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> divs = divisors(n);
    cout << "Divisors of " << n << " are: ";
    for(int i=0; i<divs.size(); i++){
        cout << divs[i] << " ";
    }
    cout << endl;
}