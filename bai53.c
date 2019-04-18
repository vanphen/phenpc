#include<stdio.h>

int main(){

  int n,m,abs,max;

  printf("enter a positive or negative inerger: ");

  scanf("%i",&n);

  printf("\n you enterd %i.\n",n);

  if( n<0)
    {
      abs = -n;
      printf("its absolute value is %i\n",abs);
    }
  if( n>0)
    {
      abs = n;

      printf("its absolute value is %i\n",abs);

    }

  printf("\n enter two intergers (e.g.1 2):  ");

  scanf("%i %i",&n,&m);

  printf("\n you entered %i and %i.\n",n,m);

    if( n>m)
    {
      max = n;
      printf("%i is the larger value \n",max);
      
    }
  if( n<m)
    {
      max = m;

      printf("%i is the larger value \n",max);

    }
  




}
