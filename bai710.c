#include<stdio.h>

int main(){

  int n;
  int dem=0;
  printf("nhap n de co so hoan hao: ");

  scanf("%d",&n);

  for(int i=2;i<n;i++){
    for(int j=1;j<i;j++){
      if(i%j==0){
	dem=dem+j;
      }
    }
    if(dem == i)
      printf("so hoan hao:%d\n",dem);
    dem=0;
  }


}
