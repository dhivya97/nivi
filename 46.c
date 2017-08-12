
#include <stdio.h>

int main()
{
    int j, n;
    printf("Enter number to print table: ");
    scanf("%d", &n);
    for(j=1; j<=10; j++)
    {
        printf("%d * %d = %d\n", n, j, (num*j));
    }
    return 0;
}
