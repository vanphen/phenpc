#include<stdio.h>
#define VAT 0.04
int main(){

  int id;
  char tieude[100];

  float rate;

  char chatluong[100];

  printf("moi ban nhap vao so sach: \n");
  
  scanf("%d",&id);

  printf("moi ban nhap vao ten sach: \n");
  scanf("%s",tieude);

  printf("moi ban nhap vao chat luong sach: \n");

  scanf("%s",chatluong);

  printf("moi ban nhap vao gia sach: ");

  scanf("%f",&rate);

  float tong;

  tong = rate + rate*VAT;
  
  printf("TLU BOOKSELLER \n ");

  printf("chatluong\t ISBN\t Title\t     Price\t Total \n");

  printf("%s\t %d\t %s\t           %f 1 \n",chatluong,id,tieude,rate );

  printf("VAT:%lf \n",VAT);

 

  printf("You Pay:%f ",tong);



}
