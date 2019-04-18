#include<stdio.h>

int main(){

  int sl;
  int diem;
  int tongdiem=0,sodiemnhap=0;

  int  dem=1;

  printf("moi ban nhap so luong tap diem:");
  scanf("%d",&sl);

  while(dem<=sl){

    printf("nhap diem:");
    scanf("%d",&diem);

    tongdiem=tongdiem+diem;
    sodiemnhap=sodiemnhap+1;
    dem++;
    
  }
  float diemtb=0;

  diemtb = tongdiem/sodiemnhap;

  printf("diem trung binh la:%f \n",diemtb);

}
