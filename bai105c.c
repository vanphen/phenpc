#include<stdio.h>

int kiemtra(int a[],int size,int n){

  
  for(int i=0;i<size;i++){
    if(a[i] == n)
      return i;      
  }
  return -1;
}


int main(){
  int a[10]={1,1,2,2,3,3,4,4,5,5};
  int size=0;
  int b[10];
  int e[10];
  
  int dem=0;

  for(int j=0;j<10;j++){
    //if size ==0
    int c = kiemtra(b,size,a[j]);
    if(c==-1 || size == 0){
	b[size]=a[j];
        e[size]=1;
	size++;
    }else {
      e[c]++;
    }
    
}


  for(int i=0;i<size;i++){
    printf("%d-%d\t",b[i],e[i]);	   
  }
  
}
