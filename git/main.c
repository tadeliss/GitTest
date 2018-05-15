#include <stdio.h>
#include <stdlib.h>

int i,a[10], b=1,s,c[5];
float av;


int main()
{
for (i=0,b; i<5;i++,b++)
{

    printf("number %d: ", b );
    scanf("%d", &a[i]);
}
    for (i=0;i<5;i++)
    {
        c[i]=a[i]*a[i]*a[i];
printf("\n%d", c[i]);

    }

    return 0;
}
