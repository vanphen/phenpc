#include<stdio.h>

int main (){

  int a,b,c;
  int sum;
  printf("thue dia qua dem :$7.00\n");
  printf("thue 3 ngay : $5.00\n");
  printf("thue dia 1 tuan: $3\n");
  printf("so luong dia khach thue tung loai:\n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  sum = a*7+b*5+c*3;
  printf("so luong dia thue qua dem la:%d\n",a);
  printf("so luong dia thue 3 ngay la:%d\n",b);
  printf("so luong dia thue 1 tuan la:%d\n ",c);
  printf("tong so luong dia thue trong ngay la:%d\n",a+b+c);
  printf("tong so tien la:%d\n",sum);
  
  

 



}
