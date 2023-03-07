/* p.63 사용자로부터 입력받은 정수 2개의 합을 계산하여 출력 */
#include <stdio.h>
int main() {
  int x, y, sum;
  printf("첫 번째 숫자를 입력하세요 : ");
  scanf("%d", &x);
  printf("두 번째 숫자를 입력하세요 : ");
  scanf("%d", &y);
  sum = x + y;
  printf("합 = %d\n", sum);
}