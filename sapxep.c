#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	int n,x;
	int dem=0,s=0,b=0;
	time_t t;
	srand((int)time(0));
	do{
		printf("nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<=0) printf("nhap lai\n");
	}while(n<=0);

	int a[n];
	// nhap so phan tu cua mang
		for(int i=0;i<n;i++){
		a[i]=rand()%100;
		}
	// in ra mang	
	printf("mang cua ban la: ");
	for(int i=0;i<n;i++){
		printf("%d   ",a[i]);
	}
	// nhap x
	printf("\n");
	printf("nhap so nguyen x:");
	scanf("%d",&x);
	
	

	for(int j=-pow(2,15);j<pow(2,15);j++){
	    for(int i=0;i<n;i++){
	    	dem=a[i];
	    	if(x==dem){
	    		printf("false\n");
	    		return 0;
			}
			
		    s=s+((rand()%2)*a[i]);
	    }
	    
	    if(s==x && s!=0){
	    	
			b=1;
	    	printf("true");
	    	break;
		}
		s=0;
	}
	if(b==0) printf("false");
	printf("\n");
}
