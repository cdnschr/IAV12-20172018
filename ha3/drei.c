#include <stdio.h>

int main(void) {
int temp = 0;

for (int i = 0; i <= 1024; i++) {
  temp += i;
}
printf("%d\n", temp);
return 0;
}
