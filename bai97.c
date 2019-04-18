#include<stdio.h>

int diem(int b){
  
  printf("moi ban nhap diem cua giam khao:");

  scanf("%d",&b);
  return b;
}


double diemtb(int arr[],int size){
  double tongtb=0;
  int min=arr[0];
  int max=arr[0];

      for(int i=0; i<5;i++){
        if(min>arr[i]){
       	    min=arr[i];
	}
      }
      for(int j=0;j<5;j++){
        if(max<arr[j]){
            max=arr[j];
        }
      }
    

      for (int i=0;i<5;i++){

      tongtb=tongtb+arr[i];

      }
      tongtb=(tongtb-min-max)/3;
  
  

  printf("diem tb cua thi sinh:%g\n",tongtb);

      
}


int main(){
  int b;
  int a[5];
  
  
  for(int i=0;i<5;i++){
    a[i]=diem(b);    
    if(a[i]<0 || a[i]>10){
      printf("ban da nhap sai hay nhap lai di\n");
      break;
    }    
  }

     diemtb(a,5);
}  
  

