#include<stdio.h>
int summation (int *arr, int n, int i, int sub){
    if (i == n)
    {
       return sub;
    }
     return summation(arr, n, i+1, sub + arr[i]);

}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", summation(arr, n, 0, 0));
    return 0;
}