#include <stdio.h>

void main() {
  int x;
  int y;
  
  y = (x = 3) + (x = 4);
  printf("%d %d\n", x, y);
}

