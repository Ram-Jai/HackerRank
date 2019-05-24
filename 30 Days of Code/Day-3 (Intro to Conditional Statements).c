**C code:**

#include <stdio.h>

int main()
{
    int i;              //take a number
    scanf("%d",&i);

    if (i%2==1)
        printf("Weird");
    if (i%2==0 && i>2 && i<5)
        printf("Not Weird");
    if (i%2==0 && i>6 && i<=20)
        printf("Weird");
    if (i%2==0 && i>20)
        printf("Not Weird");
}
