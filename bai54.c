#include<stdio.h>

int main(){

  int a;

  printf("moi ban nhap so kieu int: ");

  scanf("%d",&a);
  printf("so int la: %d \n",a);

  float b;

  printf("moi ban nhap so kieu float: ");

  scanf("%f",&b);

  printf("so float la: %f \n",b);

  double c;
  

  printf("moi ban nhap so kieu double: ");

  scanf("%lf",&c);
  printf("so int la: %lf \n",c);

  char kytu;

  printf("moi ban nhap ky tu kieu char: ");

  scanf("%c",&kytu);
  
  printf("ky tu kieu char: %c \n",kytu);

  char phen[20] ;

  printf("moi ban nhap so kieu string: ");

  scanf("%s",phen);
  printf("kieu string la: %s \n",phen);
}
