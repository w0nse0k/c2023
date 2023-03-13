/* p.140 relation.c
  관계 연산자는 참이면 1, 거짓이면 0을 리턴한다.
*/
#include <stdio.h>
int main() {
  int x, y;
  printf("두 개의 정수를 입력하세요 : ");
  scanf("%d%d", &x, &y);

  printf("%d == %d : %d\n", x, y, x == y);
  printf("%d != %d : %d\n", x, y, x != y);
  printf("%d > %d : %d\n", x, y, x > y);
  printf("%d < %d : %d\n", x, y, x < y);
  printf("%d >= %d : %d\n", x, y, x >= y);
  printf("%d <= %d : %d\n", x, y, x <= y);
}