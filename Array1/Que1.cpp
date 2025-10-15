#include<iostream>
using namespace std;
void reverseArray(vector<int>& arr, int M){
    int a = M+1;
    int b = arr.size()-1;
    while(a<=b){
        swap(arr[a],arr[b]);
        a++;
        b--;
    }
}
