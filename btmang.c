#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
  int number;
  int mang[7];
  time_t t;
  int mang2[7];
  int demmang2=0;
  int tongnumber=0;
  int tong2so;
  int tong4so;
  //khoi tao ngau nhien cho mang
  //  srand((unsigned) time(&t));

      
  for(int i=0;i<7;i++){

    mang[i]=rand()%20;
    printf("%d  ",mang[i]);
  }
 
  printf("\n");
  // nhap 1 number
  printf("\n");
  printf("moi ban nhap 1 so :");
  scanf("%d",&number);

  
  // find number in array < number
  for(int i=0;i<7;i++){
    if(mang[i] <= number){
      mang2[demmang2]=mang[i];
      demmang2++;

    }
  }

  printf("\n");
  // printf ra b

  // tinh tong phan tu trong mang va
  for(int i=0;i<demmang2;i++){
    tongnumber=tongnumber+mang[i];
  }
  if(tongnumber==number){
    printf("true\n");
    return 0;
  }
  // in ra mang
  for (int i=0;i<demmang2;i++){
    printf("%d  ",mang2[i]);

  }

  printf("\n");
 
  
  for(int i=0;i<demmang2;i++){
    for(int j=i+1;j<demmang2;j++){
      // 2 so cong voi nhau
      tong2so=mang2[i]+mang[j];
      if(tong2so==number){
	printf("true\n");
	return 0;
      }
         // tong 5 so
      if((tongnumber-tong2so)==number){
	printf("true\n");
	return 0;
      }

         // tong 3 so va 4 so;
         int tong3so=0;
      for(int z=0;z<demmang2;z++){
	   tong3so=tong2so+mang[z];
	   if(tong3so==number){
	     printf("true\n");
	     return 0;
	   }
	   tong4so=tongnumber-tong3so;  
	     if(tong4so==number){
	       printf("true\n");
	       return 0;
	     } 
      }
	 
	 
	 
	 
    } 
  }

  
  int tong6so;
  // tong mang -1 phan tu
  for(int i=0;i<demmang2;i++){
    tong6so=tongnumber-mang[i];
    if(tong6so == number){
      printf("true\n");
      return 0;
    }
  }

  printf("false");
  

  printf("\n");
  



}
