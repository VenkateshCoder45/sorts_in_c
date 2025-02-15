//We always find a minimum element from unsorted part and store it in sorted part of the array
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],min,temp;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)  //Number of passes
    {
       min=i; //Initialize 0 index element s minimum at begin
       for(int j=i+1;j<n;j++)  //To find the minimum element by compairing Linearly
    {
         if(a[min]>a[j]){
                min=j;
            }
    }        
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        
    }
    printf("Sorted Array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}