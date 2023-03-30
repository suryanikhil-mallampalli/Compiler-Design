//bin eq. should be divisible by 3
#include <stdio.h>
#include <math.h>
int conv(long long);
int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  int deci=conv(n);
  if(deci%3==0){printf("String Accepted");
  }
  else{ printf("String not Accepted");
  }
  return 0;
}
int conv(long long n) {
  int dec = 0, i = 0, rem;
  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  return dec;
}
