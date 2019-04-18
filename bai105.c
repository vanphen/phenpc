#include<stdio.h>


int demso(int arr[],int size){
  int dem=0;
  for(int i=0;i<size;i++){
    if(arr[i]==0){
      dem++;
    }
 }
  return dem;
}

int phen(int arr[], int size){
  int dem=0;
  int a=0;
  for(int i=0;i<size;i++){
    if(arr[i]==0){
      dem++;
    }
    if(a<=dem){
      a=dem;
    }
    if(arr[i] !=0){
      dem=0;
    }
  }

  return a;
}





int main(){
  int mang[12];
  for(int i=0;i<12;i++){
    printf("nhap phan tu cho mang:");
    scanf("%d",&mang[i]);
  }

  int a=demso(mang,12);
  int b=phen(mang,12);
  
  printf("cac so 0 co trang mang la:%d\n",a);
  printf("do dai cua day con=0 lon nhat trong mang la:%d\n",b);
}
  




