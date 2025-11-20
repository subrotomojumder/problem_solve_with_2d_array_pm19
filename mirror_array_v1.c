#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = M -1; j >= 0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}