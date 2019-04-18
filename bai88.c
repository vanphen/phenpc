#include<stdio.h>

int main(){

  int n;
  printf("nhap n:");
  scanf("%d",&n);
  int giaithua=1;
  //dung for
  for (int i=1 ;i<=n;i++){
    giaithua= giaithua*i;
  }
  printf("vong lap n!=%d \n",giaithua);

  //dung do while
  
  int dem = 1;
  int giaithuado=1;
  do{
   
    giaithuado=giaithuado*dem;
    dem++;
  }while(dem<=n);
  printf("vong do while:n!=%d\n",giaithuado);

  // dung while
  // dung bien dem=1
  int demwhile=1;
  int gt=1;
  while(demwhile<=n){
    gt = gt*demwhile;
    demwhile++;
  }  
  printf("vong while:n!=%d\n",gt);
  
}
