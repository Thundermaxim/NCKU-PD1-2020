#include<stdio.h>
#define PI 3.14

float r;

int main(){
  scanf("%f", &r);
  printf("%.2f %.2f", r*r*PI, 2*r*PI);
}
