#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &a[2];  // Point p to the address of a[2]

  *(p) = 98;  // Assign 98 to the memory location pointed to by p

  printf("a[2] = %d\n", a[2]);  // This will now print "a[2] = 98"
  return 0;
}
