#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){


  int a;
  time_t t;
  //khoi tao bo so ngau nhien
  srand((unsigned) time(&t));
  
  int b;

  b = rand() % 10;

  printf("moi nhap vao so:1-10: ");

  scanf("%d",&a);

  if( a<b)
    printf("so cua ban nho hon so ngau nhien(a=%d<b=%d)\n",a,b);

  else if(a>b)
    printf("so cua ban lon hon so ngau nhien(a=%d>b=%d)\n ",a,b);

  else
    printf("chuc mung ban ban doan gioi vl (a=b=%d) \n",b);
  



}
