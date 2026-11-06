#include<bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n){
    bool sorted = true;
    for(int i = 0; i<n-1; i++){
        if (arr[i]>arr[i+1]){
            sorted = false;
            break;
        }
    }
    return sorted;
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    bool isSorted = arraySortedOrNot(arr, n);
    if(isSorted){
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is not sorted in ascending order.\n");
    }
}