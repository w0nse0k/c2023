#include <stdio.h>
int main() {
  printf("sizeof char = %ld\n", sizeof(char));
  printf("sizeof short = %ld\n", sizeof(short));
  printf("sizeof int = %ld\n", sizeof(int));
  printf("sizeof long = %ld\n", sizeof(long));
  printf("sizeof long long = %ld\n", sizeof(long long));
  printf("sizeof float = %ld\n", sizeof(float));
  printf("sizeof double = %ld\n", sizeof(double));
  printf("sizeof long double = %ld\n", sizeof(long double));

  char i = 128;  // 0b10000000
  int j = 128;   
  printf("%d\n", i);
  printf("%d\n", j);

  float pi1 = 3.1415926535897932384626433;
  double pi2 = 3.1415926535897932384626433;
  printf("%.20f\n", pi1);
  printf("%.20f\n", pi2);
}
