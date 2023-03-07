/* p.73 4칙 연산 */
#include <stdio.h>
int main() {
  int x, y, sum;

  printf("첫 번째 숫자를 입력하세요 : ");
  scanf("%d", &x);
  printf("두 번째 숫자를 입력하세요 : ");
  scanf("%d", &y);

  printf("%d + %d = %d\n", x, y, x + y);
  printf("%d - %d = %d\n", x, y, x - y);
  printf("%d * %d = %d\n", x, y, x * y);
  printf("%d / %d = %d\n", x, y, x / y);
}
