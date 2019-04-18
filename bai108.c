#include<stdio.h>




void hamdao(int arr[],int size){

  for (int i=0;i<size/2;i++){
  int so=arr[i];
   arr[i]=arr[size-1-i];
   arr[size-1-i]=so;    
  }

  for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);
  }
}

int main(){
  int ham[7];

  for (int i=0;i<7;i++){
    printf("nhap  phan tu:");
    scanf("%d",&ham[i]);
  }

  
  hamdao(ham,7);

}
