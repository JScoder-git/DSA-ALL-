#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}


int main() { 


    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    int index =binarySearch(arr, n, key);
    cout<<index+1;

    return 0;
}
