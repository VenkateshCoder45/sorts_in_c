#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],temp;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
                a[j+1]=a[j];
                j--;
            }
        a[j+1]=temp;
    }
    printf("Sorted Array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}