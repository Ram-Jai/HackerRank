**C code:**

#include <stdio.h>

int main()
{
    int n,i;                //input the number
    scanf("%d",&n);

    for (i=1;i<=10;i++)     //print the table upto x10
        printf("%d x %d = %d\n",n,i,n*i);
}
