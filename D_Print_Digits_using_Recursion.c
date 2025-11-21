#include <stdio.h>
void func(int n)
{
    if (n == 0)
    {
        return;
    }
    func(n / 10);
    int last = n % 10;
    printf("%d ", last);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("%d", n);
        }
        else
        {
            func(n);
        }
        printf("\n");
    }

    return 0;
}