#include<stdio.h>

int main(){

  int a = 5, b = 6 ,c = 7;

  puts("int a = 5 , b = 6 , c = 7 \n");

  printf(" the value of a > b is   \t%i\n\n ",a > b);

   printf(" the value of b < c is   \t%i\n\n ",b > c);

    printf(" the value of a + b > c is   \t%i\n\n ",a+b >= c);
    
     printf(" the value of a-b <= b-c is   \t%i\n\n ",a-b <= b-c);

      printf(" the value of b-a == b-c is   \t%i\n\n ",a = b-c);

       printf(" the value of a*b != c*c  is   \t%i\n\n ",a * b < c * c);

       // ket qua = -1 sau khi thay boi vi a= b-c la 1 phep toan gan a= 6-7 chu khong phai phep so sanh ==

}
