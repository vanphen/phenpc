#include<stdio.h>

double celsius(double f){
  double c;
  c=5/(9*(f-32));
  return c;
}

int main(){

  for (int i=0;i<=20;i++){
    printf("%d do C=%g do F\n",i,celsius(i));
    
  }


}
