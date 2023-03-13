/* p.133 증감연산자 */
#include <stdio.h>
int main() {
  int x, y;
  x = 1;
  y = ++x;  // x=x+1, y=x (x를 먼저 증가하고 y에 할당)
  printf("x=%d, y=%d\n", x, y);

  y = x++;  // y=x, x=x+1 (x를 y에 할당한 후 x를 증가)
  printf("x=%d, y=%d\n", x, y);
}