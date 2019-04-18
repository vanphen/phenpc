#include<stdio.h>

int main(){

  int a,b,c;

  printf("moi ban nhap 3 so \n");

  scanf("%d%d%d",&a,&b,&c);

  if(a<b && a<c)
    printf("so a la so nho nhat :%d ",a);

  else if(b<a && b<c)
    printf("so b la so nho nhat :%d",b);
  else if(c<a && c<b)
    printf("so c la so nho nhat :%d",c);
  else
    printf("3 so bang nhau la truogn hop no smallest a=b=c=%d",a);


}
