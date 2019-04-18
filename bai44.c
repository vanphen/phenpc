#include<stdio.h>
#define PI 3.14 
int main(){

  float r;

  printf("moi ban nhap ban kinh r: ");

  scanf("%f",&r);

  float dientich;
  float chuvi;


  chuvi = 2*PI*r;

  dientich = PI*r*r;

  printf("ban kinh cua hinh tron la:%f \n ",r);

  printf("chu vi hinh tron la:%f \n",chuvi);

  printf("dien tich hinh tron la: %f",dientich);

  



}
