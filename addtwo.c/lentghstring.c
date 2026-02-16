#include <stdio.h>
#include <string.h>
int main() {
char str[100];
printf("Enter a string: ");
gets(str);
printf("Length = %d\n", strlen(str));
return 0;
}#include <stdio.h>
#include <string.h>
int main() {
char str1[100], str2[100];
printf("Enter a string: ");
gets(str1);
6
strcpy(str2, str1);
printf("Copied string: %s\n", str2);
return 0;
}