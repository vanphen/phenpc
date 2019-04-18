#include<stdio.h>

int main(){
  int i,n;
  int giaithua=1;

  printf("moi ban nhap vao n!:");
  scanf("%d",&n);
    
  for(i=1;i<=n;i++){
    giaithua=giaithua*i;
  }

  printf("n! = %d \n",giaithua);


}
