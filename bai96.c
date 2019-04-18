#include<stdio.h>

int tinhchanle(int a){
  int demchan=0;
  int demle=0;
  while(a>=1){
    if(a%2==0){
      demchan++;
      a= a/10;
    }
    else if(a%2==1){
      demle++;
      a=a/10;
    }

  }
  printf("so chan trong so do la:%d\n",demchan);
  printf("so le trong so do la:%d\n",demle);
  if(demchan>demle)
    printf("so toan so chan\n");
  else if(demchan<demle)
    printf("so toan so le\n");
  else printf("so chan bang so le\n");
}

int main(){
  int a;
  printf("moi ban nhap vao 1 so:");
  scanf("%d",&a);

  tinhchanle(a);

}
