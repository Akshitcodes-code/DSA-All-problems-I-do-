#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    for (int i =0; i<n/2; i++){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
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
    reverse(arr, n);
    cout << "The reversed array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}