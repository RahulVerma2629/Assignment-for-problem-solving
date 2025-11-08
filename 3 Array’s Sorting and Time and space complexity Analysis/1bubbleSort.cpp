#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,4,2,5,6,3};
    int n = 6;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // bubble sort
    for(int i=0; i<n-1; i++){ // n-1 passes
        // traverse
        for(int j=0; j<n-1; j++){ // (int j=0; j<n-1-i; j++) -> for efficient T.C.
            if(arr[j]>arr[j+1]){ // swap
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}