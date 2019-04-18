#include<stdio.h>

int main(){

  int age;

  printf("moi ban nhap vao lua tuoi: ");

  scanf("%d",&age);

  if(age<18)
    printf("tuoi cua ban :tre \n");

   else if(age>=18 && age<65)
 
  printf("tuoi cua ban : truong thanh \n");

  else if(age >=65)
    printf("tuoi cua ban:gia sap oang\n");

  else printf("ban la quai vat");
  



}
