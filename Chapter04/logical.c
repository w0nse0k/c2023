/* 논리 연산자 */
#include <stdio.h>
int main() {
  int true = 1;
  int false = 0;
  printf("1 && 1 = %d\n", 1 && 1);
  printf("1 && 0 = %d\n", 1 && 0);
  printf("0 && 0 = %d\n", 0 && 0);

  printf("1 || 1 = %d\n", 1 || 1);
  printf("1 || 0 = %d\n", 1 || 0);
  printf("0 || 0 = %d\n", 0 || 0);

  printf("!1 = %d\n", !1);
  printf("!0 = %d\n", !0);
}