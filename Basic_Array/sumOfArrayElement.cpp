#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum += arr[i];
    }
    return sum;
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
    int total = sum(arr, n);
    cout << "Sum of the elements in the array is: " << total << endl;
}