#include<stdio.h>
#include<conio.h>
void main(){
    int arr[100];
    int n, i, j, current;
    printf("Enter no. of elements \n");
    scanf("%d",&n);
    printf("Enter data\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    for(i=1;i<n;i++){
        current=arr[i];
        j=i-1;
        while(arr[j]<current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    printf("Sorted array\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    getch();
}