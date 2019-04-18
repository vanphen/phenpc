#include<stdio.h>

int songuyento(int x){
  for(int i=2;i<x;i++){
    if(x%i==0){
      return 0;
    }
  }
  return 1;
}


void btmang(){
  // tao mang
  int n;
  printf("nhap so phan tu cua mang:");
  scanf("%d",&n);
  int a[n];
  int demnt;
  
  for(int i=0;i<n;i++){
    printf("phan tu thu %d:",i);
    scanf("%d",&a[i]);
  }
  printf("\n");
  // tim cac so nguyen to co trong mang
  printf("cac so nguyen to co trong mang la:");
  for(int i=0;i<n;i++){
    demnt=songuyento(a[i]);
    if(demnt==1){
      printf("%d  ",a[i]);
    }
  }
  printf("\n");
  /*// thay the cac phan tu am trong mang =0
  printf("thay the cac phan tu am trong mang =0:");
  for(int i=0 ;i<n;i++){
    if(a[i]<0){
      a[i]=0;
    }
    printf("%d  ",a[i]);
  }
  printf("\n");
  */

  /*
  
  // xoa cac phan tu am co trong mang
  int ptm=0;
  for(int i=0 ;i<n;i++){
    if(a[i]>=0){
      a[ptm]=a[i];
      ptm++;
    }
  }
  // in ra mang
  printf("\n");
  printf("mang sau khi xoa la:");
  for(int i=0;i<ptm;i++){
    printf("%d   ",a[i]);
  }
  printf("\n");

  */

  // sap xep mang da nhap vao
  printf("\n");
  int ptma;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      if(a[i]>a[j]){
	ptma=a[i];
        a[i]=a[j];
	a[j]=ptma;
      }
    }
  }
  // in ra mang
  printf("mang sau khi sap xep la:");
  for(int i=0;i<n;i++){
    printf("%d  ",a[i]);
  }
  printf("\n");

}







int main(){
  btmang();
}
