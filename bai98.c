#include<stdio.h>

int nam(int nam){

  if((nam%4==0 && !(nam%100==0)) || nam%400==0){
    printf("nam %d  la nam nhuan\n",nam);
  } else {
    printf("nam %d khong phai la nam nhuan\n",nam);
  }

}

int main(){
  int n;
  printf("moi ban nhap vao 1 nam:");
  scanf("%d",&n);

  nam(n);

}
