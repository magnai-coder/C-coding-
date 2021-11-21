#include<stdio.h>
int main(void)
 {  
     long n, a[n], i;
	 float s, m; 
  	 s=0;
 	 printf("Dungiin toogoo oruulna uu\n"); scanf("%d",&n);
 	 for(i=0; i<n; i++) {
 	 	printf("Hicheel dugaar \t%d dun=", 1+i); scanf("%d",&a[i]);
 	 	while(a[i]>100){ 
			printf("Aldaatai utga bna 1-100 hoorond unelne uu\n");
			scanf("%d",&a[i]);
		    }
           	printf("\n");
	      }
		
	  printf("%7s%13s\n","Hicheel","Dun");
	  for(i=0; i<n; i++){
	  	printf("%7d%13d\n",i+1, a[i]);
	  	s=s+a[i]*4/100;
	  }
	  s=s/n;
	  printf("Golch dun-%.1f", s);
	  return 0;
 }

