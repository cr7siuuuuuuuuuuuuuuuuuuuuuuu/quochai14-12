#include<stdio.h>
#include<math.h>
 int main(){
     int i=1, n, dem=0;
     printf("nhap vao gia tri n: ");
     scanf("%d", &n);
    while(i <= n  ){
        if (n%i==0){
             dem++;
		}
        i++;
	}
	printf("so uoc cua n la :%d", dem);
	return 0;
 }

