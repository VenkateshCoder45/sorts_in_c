#include<stdio.h>
int Partision(int a[],int low,int high){
        int pivot=a[low]; //Initially first element taken as pivot
        int start=low;
        int end=high;
        while(start<end) 
        {
        while(a[start]<=pivot){
            start++;  /*If the start (means first value) indexed value is less than pivot then it go to next start
            by increment*/
        }
        while(a[end]>pivot){
            end--; /*If the end (means last value) indexed value is greater than or equal to 
             pivot then it go to before end by decrement*/
        }
        if(start<end)  
         {  
            /*If any value in the start index is Found i.e, greater than pivot
            It was swapped by end indexed element*/
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
        /*swap first element and final end indexed element 
        to fix pivot Element at its apprropriate place*/
        int temp=a[end];
        a[end]=a[low];
        a[low]=temp;
        return end; // Returns pivot elment index value
}
void Quicksort(int a[],int n,int low,int high){
    if(low>=high){
        return;
    }
    else{
       int pivot=Partision(a,low,high); //store returned value from Partision function i.e, end
       Quicksort(a,n,low,pivot-1);  //Elements less than pivot Element
       Quicksort(a,n,pivot+1,high); //Elements Greater than pivot Element
}
}
int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  Quicksort(a,n,0,n-1);  // Function call
  printf("Sorted Array: \n");
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}