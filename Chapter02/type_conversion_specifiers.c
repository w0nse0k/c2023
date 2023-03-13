#include <stdio.h>
int main() {
  char c = 'A';
  int i = 255;
  long l = 255;
  long long ll = 10000000000;
  double d = 3.1415926535898;
  double e = 100.0;
  printf("%c\n", c);    // %c : char
  printf("%d\n", i);    // %d : int (decimal)
  printf("%ld\n", l);   // %ld : long
  printf("%lld\n", ll);  // %Ld : long long
  printf("%f\n", d);    // %f : double (floating point)

  printf("%x\n", i);  // %x : hexadecimal (16진수 정수형)
  printf("%e\n", e);  // %e : exponential (지수형 부동소수점)
}