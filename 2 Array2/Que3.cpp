#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,1,2,3,4,4,5,2};
    sort(arr.begin(),arr.end());
    
    cout<<"The repeating elements are: ";
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]) cout<<arr[i]<<" ";
    }
}