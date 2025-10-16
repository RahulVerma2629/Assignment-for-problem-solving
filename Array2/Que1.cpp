// #include<iostream>
// using namespace std;
// int main(){
//   int arr[] = {5,1,3,4,2,6};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int T = 5;
//   // simple linear search
//   for(int i=0; i<n; i++){
//   	if(arr[i]==T){
//     	cout<<"Element Found at Position: "<<i;
//     }
//   }
// }


// #include<iostream>
// using namespace std;
// int main(){
//   // should be sorted array
//   int arr[] = {2,3,4,5,6,7};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int T = 5;
//   // binary search
//   // TC = O(logN)
//   int lo = 0;
//   int hi = n-1;
//   while(lo<=hi){
//     int mid = lo + (hi-lo)/2;
//     if(arr[mid]==T){
//       cout<<mid;
//       break;
//     }
//     else if(arr[mid]<T) lo = mid+1;
//     else if(arr[mid]>T) hi = mid-1;
//     else cout<<-1;
//   }
// }




