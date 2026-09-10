#include <stdio.h>
int main(){
  float length, breadth, perimeter, area;

  printf("Enter the length :");
  scanf("%F", &length);

  printf("Enter the width : ");
  scanf("%f", &breadth);

  perimeter = 2 * (length + breadth);
  area = length * breadth;
  
  printf("Perimeter = %.2f\nArea = %.2f", perimeter, area);
  return 0;
} 