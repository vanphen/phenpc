#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void hamnn(){
  int z=0;
  printf("moi nhap cap  ma tran NxN:");
  scanf("%d",&z);
  int a[z][z];
  int b[z][z];
  int c[z][z];

  for (int i=0;i<z;i++){
    for(int j=0;j<z;j++){
      a[i][j]=rand()%10;
      b[i][j]=rand()%10;
    }
  }

  printf("mang a:\n");
  for (int i=0;i<z;i++){
    for(int j=0;j<z;j++){
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }

  printf("mang b:\n");
  for (int i=0;i<z;i++){
    for(int j=0;j<z;j++){
      printf("%d  ",b[i][j]);
    }
    printf("\n");
  } 
  int dem=0;
  int q=0;
  for( int i=0;i<z;i++){
    for(int j=0;j<z;j++){
      q=0;
      for(int dem=0;dem<z;dem++){
	q=q+a[i][dem]*b[dem][j];
      }
      c[i][j]=q;
    }
  }
  
  printf("mang c:\n");
  for(int i=0;i<z;i++){
    for(int j=0;j<z;j++){
      printf("%d  ",c[i][j]);
    }
    printf("\n");
  }
  

}




void hammxn(){
  // nhap ma tran A va B
  int m,n,z,x;
  printf("moi nhap cap  ma tran A:(mxn):\n");
  scanf("%d%d",&m,&n);

  printf("moi nhap cap  ma tran B:(mxn):\n");
  scanf("%d%d",&z,&x);
  if(n != z){
    printf("ban da nhap sai nhan ma tran vi n(A)!=m(B)\n");
    return;
  }
  // tao mang 
  int a[m][n];
  int b[z][x];
  int c[m][x];

  // tao ma tran a
  for (int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      a[i][j]=rand()%10;
    }
  }
  // tao ma tran b
  for (int i=0;i<z;i++){
    for(int j=0;j<x;j++){
      b[i][j]=rand()%10;
      
    }
  }
  
  // inr a mang a
  printf("mang a:\n");
  for (int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }
  // in ra mang b
  printf("mang b:\n");
  for (int i=0;i<z;i++){
    for(int j=0;j<x;j++){
      printf("%d  ",b[i][j]);
    }
    printf("\n");
  }
  // ma tran a nhan ma tran b 
  int dem=0;
  int q=0;
  for( int i=0;i<m;i++){
    for(int j=0;j<x;j++){
      
      q=0;
      for(int dem=0;dem<n;dem++){
	q=q+a[i][dem]*b[dem][j];
      }
      c[i][j]=q;
    }
  }
  
  printf("mang c:\n");
  for(int i=0;i<m;i++){
    for(int j=0;j<x;j++){
      printf("%d  ",c[i][j]);
    }
    printf("\n");
  }
  
}


int main(){
  hamnn();
  hammxn();

}
