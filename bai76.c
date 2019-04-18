#include<stdio.h>

int main(void){

  int time,start;

  printf("enter starting time (an interger) in seconds ");
  scanf("%d",&start);
  printf("\nBegin countdown\n");

  for(time=start; time>0;time =time-1){
    printf("T-%d\n",time);
    
  }

  printf("Bflas-off \n");

  return(0);






}
