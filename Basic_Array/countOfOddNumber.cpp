#include<bits/stdc++.h>
using namespace std;

int countOdd(int arr[], int n){
    int count = 0;
    for (int i = 0; i< n; i++){
        if(arr[i]%2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int oddCount = countOdd(arr, n);
    cout << "Count of odd numbers in the array is: " << oddCount << endl;
}