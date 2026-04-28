// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    int n,mid,st,end,tar;
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
    while (st<=end) { 
        mid = (st + end)/2;
        if (tar==arr[mid]){
            printf("The Target is at %d.",mid);
            return 0;
        }
        else if (tar>arr[mid]){
            st = mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
    }
    printf("Number not found !");
    return 0;
}