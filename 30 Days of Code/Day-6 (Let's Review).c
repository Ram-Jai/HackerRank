**C code:**

#include <stdio.h>

int main() {

  int t;                    //input the number of strings             
  scanf("%d", &t);
  while (t) {
    char a[10000];
    scanf("%s", a);         //enter the string
    int i = 0;
    while (a[i] != '\0') {
      if (i % 2 == 0)
        printf("%c", a[i]);
      i++;
    }
    i = 0;
    printf(" ");
    while (a[i] != '\0') {
      if (i % 2 != 0)
        printf("%c", a[i]);
      i++;
    }
    t--;
    printf("\n");
  }
}
