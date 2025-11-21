#include<stdio.h>
#include <limits.h>
int maximum(int *arr, int n, int i){
    if (i == n)
    {
        return INT_MIN;
    }
    int max = maximum(arr, n, i+ 1);
    // printf("%d ", arr[i]);
    if (arr[i] > max)
    {
       max = arr[i];
    }
        return max;
    
    
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // maximum(arr, n, 0);
    printf("%d", maximum(arr, n, 0));
    return 0;
}