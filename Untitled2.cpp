#include<stdio.h>
// nhap vao n mon va tinh tb , nhap ca ten
int main(){
	char ten[30];
	gets(ten);
	printf("ho va ten: %s ", ten);
	
	int a[8];
	char mon[10];
	gets(mon);
	for(int i=0 ; i < 8; i++)
	 for( int j=0 ; j < 8; j++){
	   printf("\n	mon :%s", mon[j]);
		scanf("%d", &a[i]);
		printf("%d", a[i]);
	}
	
return 0;
}
