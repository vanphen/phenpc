#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


// ham can 

double squareRoot(double n) {
   double i, precision = 0.00001;

   for(i = 1; i*i <=n; ++i);   //tim phan nguyen

   for(--i; i*i < n; i += precision);  //tim phan thap phan

   return i;
}


void  bt(){
  int n;
  // nhap so phan tu cua mang
  printf("nhap so phan tu cua mang:");
  scanf("%d",&n);

  int a[n];
  //randomham
  srand((int) time(0));
  for(int i=0;i<n;i++){
    a[i]=rand()%10;
  }
  

// xuat ham
  
  printf("mang cua ban la:\n");
  for(int i=0;i<n;i++){
    printf("%d  ",a[i]);
  }

 // tinh trung binh c ong cac so le o vi tri chan
  printf("\n");
  double tb;
  double tong=0;
  double dem=0;
  for(int i=0;i<n;i=i+2){
    if(a[i]%2==1){
      tong=tong+a[i];
      dem++;
    }
  }
  tb=tong/dem;
  printf("tbc cac so le vi tri chan =%g\n",tb);


  // so lon nhat trong mang vua nhap
  int max=a[0];
  
  for(int i=0;i<n;i++){
    if(max<a[i]){
      max=a[i];
    }
  }
  printf("so max trong mang la:%d\n",max);

  // vi tri so nho nhat trong mang
  int vitri;
  int min=a[0];
  
  for(int i=0;i<n;i++){
    if(min>a[i]){
      min=a[i];
      vitri=i;
    }
  }
  printf("vi tri so nho nhat trong mang la:%d\n",vitri);

  // dem cac so chinh phuong co trong mang
  int demcp=0;
  int can;
  int canx;
  int bp;
  for(int i=0;i<n;i++){
    can=a[i];
    canx=squareRoot(can);
    bp=canx*canx;
    if(bp==a[i]){
      demcp++;
    }
  }
  printf("cac so chinh phuong co trong mang la:%d\n",demcp);


}



int main(){
  bt();

}
