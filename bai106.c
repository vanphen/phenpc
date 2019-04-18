#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  
  int a[3][3];
  int b[3][3];
  int c[3][3];
  int i,j;


  srand(time(NULL));
  for (i=0;i<3;i++){
    for(j=0;j<3;j++){
          a[i][j]=rand()%10;
	  b[i][j]=rand()%10;

    }
  }

  for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      // for(int k=0;k<3;k++){
	 c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];

	 // c[i][j]=c[i][j]+a[i][k]*b[k][j];
	
      //}
    }
  }
  
  printf("mang a:\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }
  printf("mang b:\n");

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d  ",b[i][j]);
    }
    printf("\n");
  }

  printf("c=axb\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d  ",c[i][j]);
    }
    printf("\n");
  }


}
