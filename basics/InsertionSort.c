#include <stdio.h>
int main() {
    int n,curr,prev;
    printf("Enter Array Length:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array elements:");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=1;i<n;i++){
        curr = arr[i];
        prev = i-1;
        while (prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    for (int i=0 ;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
