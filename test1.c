#include<stdio.h>

int ckeck(char a[],int size,int n){
  
  for(int i=0;i<size;i++){
    if(a[i] == n)
      return i;      
  }
  return -1;
}


int main(){
  char a[10]="abbcccdddd";
 
  int size=0;
  char b[10];
  int e[10];
  int dem;
  char out[10];
  
  
  for(int j=0;j<10;j++){

    int c = ckeck(b,size,a[j]);
   
    if(c==-1 || size == 0){
      
        b[size]=a[j];	
	e[size]=1;
	size++;
     
    }else {
     
      e[c]++;
     
    }
   
  }


  
 
 

  for (int i=0;i<size;i++){
    out[i]=b[i];
  }
  printf("%s\n",out);

  for(int i=0 ;i<size;i++){
    printf("%d\n",e[i]);
  }
  printf("\n");
}
