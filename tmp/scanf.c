#include <stdio.h>

int main(void)
{
  char c;
  do{
    printf("input a char please: ");
    scanf(" %c",&c);
  }while(c== 'y');
  printf("we are out now.\n");
  return 0;
}
