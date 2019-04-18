#include<stdio.h>
#include<math.h>
int main(){

  int n;
  printf("moi nhap vao so n: ");
  scanf("%d",&n);
  int m = sqrt(100);

  int dem=0;
  for(int i=1;i<n;i++){
    for(int j=2;j<m;j++){
      if(i%j != 0){
	dem=i;
      }
    }
    printf("%d \n",dem);
  }



}
