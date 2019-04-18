#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void arr(int a[],int size){
  
  for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
      if(a[i]<=a[j]){
       
	int b=a[i];
	a[i]=a[j];
	a[j]=b;
       
      }
    }
  }

  
  for(int k=0;k<size;k++){
    printf("%d  ",a[k]);
  }
}

void sole(int a[],int size){
  int dem=0;
  int  b[10];
  
  for(int i=0;i<size;i++){
    if(a[i]%2!=0){
      b[dem]=a[i];
      dem++;
    }
  }

  arr(b,dem);

}

int main(){
  int  d[10];
   srand(time(NULL));
  for(int i=0;i<10;i++){
    d[i] = rand()%15;
  }
  for(int i=0;i<10;i++){
    printf("%d   ",d[i]);
  } //tao mang random

  
  printf("\n");

  arr(d,10);
  printf("\n");
  sole(d,10);
  printf("\n");
}

