#include<stdio.h>
void BubbleSort(int a[],int n,int idx){
  //Base Case
   if(idx>=n){
       return;
    }
    /*To compare the element at idx position with all elements in the 
    Later fix it in the original position by swapping*/
   for(int i=0;i<n;i++){
    if(a[idx]<a[i]){
    int temp=a[idx];
    a[idx]=a[i];
    a[i]=temp;
  }
}  
   BubbleSort(a,n,idx+1); // Recursive Call 

}
int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  //Initiate idx to 0 at Starting 
  BubbleSort(a,n,0);
  printf("Sorted Array: ");
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}