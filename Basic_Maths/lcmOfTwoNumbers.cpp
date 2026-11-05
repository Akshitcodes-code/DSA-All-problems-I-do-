#include<bits/stdc++.h>
using namespace std;

int LCM(int n1, int n2){
    for (int i = max(n1,n2); ; i++){
        if (i%n1 == 0 && i%n2 == 0){
            return i;
        }
    }
    
}


int main(){
    int n1,n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int lcm = LCM(n1,n2);
    cout << "LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
}