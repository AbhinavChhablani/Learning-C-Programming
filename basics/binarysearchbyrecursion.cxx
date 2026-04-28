#include <stdio.h>
#include <math.h>
int BinarySearch(int st,int end, int *arr, int tar){
    if (st<=end){
        int mid = (st + end)/2;
        if (tar>*(arr+mid)){
            return BinarySearch(mid + 1,end,arr,tar);
        }
        else if(tar<*(arr + mid)){
            return BinarySearch(st,mid-1,arr,tar);
        }
        else {
            return mid;
        }
    }
    return -1;
}
int main() {
    int n,st,end,tar;
    printf("Enter Length of array :");
     scanf("%d",&n);
    int arr[n];
    printf("Enter The elements of array without commas:");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Target Value:");
    scanf("%d",&tar);
    st=0,end =n-1;
    int k=BinarySearch(st,end,arr,tar);
    if (k==-1){
        printf("Number not found !");
    }
    else
        printf("The Target is at %d",k);
    return 0;
}
