#include <stdio.h>
int main() {
int n, rev=0, rem;
3
printf("Enter a number: ");
scanf("%d", &n);
while(n != 0) {
rem = n % 10;
rev = rev*10 + rem;
n /= 10;
}
printf("Reversed number = %d\n", rev);
return 0;
}