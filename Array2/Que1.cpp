#include<iostream>
using namespace std;
int main(){
  int arr[] = {5,1,3,4,2,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int T = 5;
  // simple linear search
  for(int i=0; i<n; i++){
  	if(arr[i]==T){
    	cout<<"Element Found at Position: "<<i;
    }
  }
}