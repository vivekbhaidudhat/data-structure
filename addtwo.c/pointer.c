#include <stdio.h>
int main() {
int x = 10;
int *ptr = &x;
printf("Value = %d, Address = %p\n", *ptr, ptr);
return 0;
}