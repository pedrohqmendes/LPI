#include <stdio.h>

int main(void){
  int num = 0;
  scanf("%d",&num);
  if(num%2==0 && num > 2){
    printf("O numero nao eh primo\n");
  }
  else if(num%2 != 0 || num == 2){
    printf("O numero eh primo\n");
  }
}