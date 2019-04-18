#include<stdio.h>


int hamdao(int arr[],int size){

  for (int i=0;i<size/2;i++){
    if(arr[i] != arr[size-i-1]){
      return 5;
      break;
    }
    if(arr[i] == arr[size-i-1])
      return 6;
    }
}

int main(){
  int size;
  printf("mang cua ban co bn phan tu:");
  scanf("%d",&size);
    int arr[size];

  for (int i=0;i<size;i++){
    printf("nhap phan tu:");
    scanf("%d",&arr[i]);
  }

  if(hamdao(arr,size)==5){
    printf("mang cua ban khong doi xung\n");
   
  }
  if(hamdao(arr,size)==6){
    printf("mang cua ban co doi xung\n");
  }

}
