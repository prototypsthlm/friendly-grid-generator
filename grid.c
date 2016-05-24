#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int columns = atoi(argv[1]) + 1;
  int rows = atoi(argv[2]);

  int i = 0;
  for(i = 0; i < rows * columns; i++) {
    if(i % columns == 0 || (i + 1) % columns == 0) {
      printf("XX ");
    } else {
      printf("%02d ", i);
    }

    if((i + 1) % columns == 0 && i != 0) {
      printf("\n");
    }
  }

  return 0;
}
