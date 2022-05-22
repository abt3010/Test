// // Simple C++ program to find k'th smallest element

// Time Complexity of this solution is O(N Log N) 


#include<bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[],int n,int k){
    priority_queue<int>maxHeap;
    for(int i =0;i<=n;i++){
        maxHeap.push(arr[i]);
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}

int main(){
    int arr[] = {5,6,3,8,4,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<"The kth smallest element is: "<<kthsmallest(arr,n,k);
}





















// #include <algorithm>
// #include <iostream>
// using namespace std;

// // Function to return k'th smallest element in a given array
// int kthSmallest(int arr[], int n, int k)
// {
// 	// Sort the g=0;;iven array
// 	sort(arr, arr + n);

// 	// Return k'th element in the sorted array
// 	return arr[k - 1];
// }

// // Driver program to test above methods
// int main()
// {
// 	int arr[] = { 12, 3, 5, 7, 19 };
// 	int n = sizeof(arr) / sizeof(arr[0]), k = 2;
// 	cout << "K'th smallest element is " << kthSmallest(arr, n, k);
// 	return 0;
// }

// Function to return k'th Largest element in a given array

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int kthlargest(int arr[] , int n , int k){
// 	sort(arr , arr+n,greater<int>());

// 	for(int i =0;i<k;i++){
// 		cout<<arr[i]<<" ";
		
// 	}

//     // ORRRRRRRRR
//     // return arr[k-1];
// }
// int main()
// {
//     int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     kthlargest(arr, n, k);
// }