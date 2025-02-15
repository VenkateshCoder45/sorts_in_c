#include <stdio.h>
// Merge Sort is a function to sort subarrays back together
void Merge(int A[],int start,int mid,int end,int n){
    int i=start;
    int j=mid+1;
    int B[end-start+1]; // temporary array to store merged elements in order
    int k=0;
    while(i<=mid && j<=end){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }
        else{
            B[k++]=A[j++];
        }
    }
    while(i <= mid) B[k++]=A[i++];
    while(j <= end) B[k++]=A[j++];
    k=0;
    for(int i = start; i <= end ;i++){
        A[i]=B[k++];
    }
}
//Function to split the original arrays to subarrays by recursion call
void MergeSort(int A[],int n,int start,int end){
    //Base Case
    if(start >= end)return;
    int mid = ( start + end) /2;
    MergeSort(A,n,start,mid);  //Recursive call for left half
    MergeSort(A,n,mid+1,end);  //Recursive call for right half
    Merge(A,start,mid,end,n); // Starts merging subarrays after recursion reaches base case
    
}
int main() {
	// your code goes here
     int n;
     scanf("%d",&n);
     int A[n];
     for(int i=0;i<n;i++){
             scanf("%d",&A[i]);
     }
     MergeSort(A,n,0,n-1);
     for(int i=0;i<n;i++){
         printf("%d ",A[i]);
}
}