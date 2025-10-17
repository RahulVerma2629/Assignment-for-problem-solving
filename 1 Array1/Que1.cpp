#include<iostream>
using namespace std;
// only function create because Error/Reminder of "reverseArray" function
void reverseArray(vector<int>& arr, int M){
    // two pointers
    int a = M+1;
    int b = arr.size()-1;
    while(a<=b){
        swap(arr[a],arr[b]);
        a++;
        b--;
    }
}

// 2nd 4th 5th 2nd 3rd