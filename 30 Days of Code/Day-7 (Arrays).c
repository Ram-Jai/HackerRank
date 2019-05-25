**C code:**

#include <stdio.h>

int main()
{
    int n,i;                    //n-size of array
    scanf("%d",&n);

    int a[n];                   //a[n]-array
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);

    for (i=n-1;i>=0;i--)        //printing in reverse order
        printf("%d ",a[i]);
}
