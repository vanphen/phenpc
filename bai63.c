#include<stdio.h>

int main(){

  int age;

  printf("moi ban nhap tuoi cua ban: ");

  scanf("%d",&age);

  if( age<18)
    printf("tuoi tre tai cao \n");
  else
    if(18<=age && age<65)
      printf("dang tuoi truong thanh \n");
    else
      if(age>=65)
	printf("tuoi cua ban dang gia roi nhe \n");
  
	



    
    



}
