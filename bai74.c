#include<stdio.h>
#include<math.h>
int main(){
  int dem=0;
  

  for (int i=2;i<=100;i++){
    for(int j=1;j<=i;j++){
      if(i%j==0){
	dem++;	
      }
    }
    if(dem==2)
      printf("%d\n",i);
    dem=0;
      
  }
  
  


}
