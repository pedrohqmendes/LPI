#include <stdio.h>
#include <string.h>

int main(void){
  float temperatura; char escala_temperatura[2];
  scanf("%f %c", &temperatura, &escala_temperatura);

  if(strcmp(escala_temperatura, "C") ==0 || strcmp(escala_temperatura, "c")==0){

      printf("%.2f Celsius\n", temperatura);
      printf("%.2f Fahrenheit\n",temperatura * 1.8 + 32.0);
  }
  else if(strcmp(escala_temperatura, "F") ==0 || strcmp(escala_temperatura, "f")==0){

      printf("%.2f Fahrenheit\n", temperatura);
      printf("%.2f Celsius\n", (temperatura - 32) /1.8);

  }
}

