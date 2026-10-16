
#include <stdio.h>
int main() {
 int i, j, n;
 long long value;
 printf("Enter number of rows: ");
 scanf("%d", &n);
 for (i = 0; i < n; i++) {
 for (j = 0; j < n - i - 1; j++) {
 printf(" ");
 }
 value = 1;
 for (j = 0; j <= i; j++) {
 printf("%4lld", value);
 if (j < i) {
 value = value * (i - j) / (j + 1);
 }
 }
 printf("\n");
 }
 return 0;
}