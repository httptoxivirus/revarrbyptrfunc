#include<stdio.h>
void reverse(int *arr,int size) {
    for(int i=size-1; i!=-1; i--) {
        printf("%d ",*(arr + i));
    }
}

 int main() {
     int arr[50],n;
     printf("Enter the number of elements \n");
     scanf("%d",&n);
     printf("Enter the elements in the array \n");
     for(int i=0; i<n; i++)
     scanf("%d",&arr[i]);
     void (*ptr)(int*,int) = &reverse;
     (*ptr)(arr,n);
     return 0;
 }
