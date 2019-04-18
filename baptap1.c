#include<stdio.h>

int main(){

  /* int a=5;
  char string[] ="this is string";

  char *stringa = "hello phen " ;
    printf("hello ,%s \n",string );

    printf("hello %d %c %s   ",a,'s',stringa);

    printf("van phen :100%% ");
  */
  int i = 873;

  double f = 123.9498;

  char s[] ="hapy birthday";

  printf("using precision for integers \n");
  printf("\t%.4d\n\t%.9d\n\n",i,i);
  printf("using precision for floating-point numbers \n");

  printf("\t%.3f\n\t%.3e\n\t%.3g\n\n",f,f,f);
  printf("\t%.11s\n",s);

  return 0;
  

}
