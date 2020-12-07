#include <stdio.h>
#include <stdlib.h>
const int n=2;
const int k=3;

void tuda(int a[][k], int b[])
{
    int j, i;
    for (j=0; j<n; j++)
        for (i=0; i<k; i++)
            b[j*k+i]=a[j][i];
}
void obratno(int b[], int a[][k])
{
    int j;
    for (j=0; j<n*k; j++)
    {
        a[j/k][j%k]=b[j];
    }
}
int main()
{
    int i, j;
    int a[n][k];
    for (j=0; j<n; j++)
    for (i=0; i<k; i++)
    {
        printf("a[%d][%d]=", j, i);
        scanf("%d", &a[j][i]);
    }
    int b[n*k];
    tuda(a, b);
    for(i=0; i<n*k; i++)
    printf("%d ", b[i]);
    printf("\ni teperb obratno\n");
    obratno(b, a);
    for (j=0; j<n; j++)
    {
    for (i=0; i<k; i++)
        printf("%d ", a[j][i]);
    printf("\n");
    }
    return 0;
}
