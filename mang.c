#include<stdio.h>


int kiemtra(int a[][2],int size,int n){

  for(int i=0;i<size;i++){
    if(a[i][0]==n){
      return i;
    }
  }
    return -1;
  
}


int main(){
  int a[10]={0,2,0,2,3,2,5,6,7,2};
  int b[10][2]={};
  b[0][0]=a[0];
  int dem=0;
  int kt;
  
  for( int i=0;i<10;i++){
    
    kt=kiemtra(b,10,a[i]);
        if(kt != -1){
	  b[kt][1]++;
	  
      }else {
	  dem++;
	  b[dem][0]=a[i];
	  b[dem][1]++;
      }
      
  }


  for(int i=0;i<=dem;i++){
    // for(int j=0;j<//2;j++){
    printf("%d %d\n",b[i][0],b[i][1]);
	
  }

 

  

}
