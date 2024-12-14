#include<stdio.h>
int ham;
int main(){
char ten[30];
	gets(ten);
	printf("ho va ten: %s \n", ten);
	
	int n;
	 printf("nhap vao so mon hoc:\n");
	 scanf("%d",&n);
	 
	int a[n], tong=0, dem=0;
	 for(int i=0 ; i < n; i++){
	 	scanf("%d", &a[i]);
	 	tong+=a[i];
	 	dem++;
	 }
	 float tb=tong/dem;
	 printf("tong diem tb la:%.2f", tb);
	return 0;
}
