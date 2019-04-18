#include<stdio.h>

int main (){


  float a;

  printf("moi ban nhap gia tri do do: ");

  scanf("%f",&a);

  if ( a >=0 && a<=90)
    printf("huong cua ban la: dong bac\n");

  else if(a>90 && a<=180)
    printf("huong cua ban la dong nam \n");

    else if(a>180 && a<=270)
    printf("huong cua ban la tay nam \n");

    else if(a>90 && a<=180)
    printf("huong cua ban la tay bac \n");

    else printf("ban da nhap sai huong \n");
  






}
