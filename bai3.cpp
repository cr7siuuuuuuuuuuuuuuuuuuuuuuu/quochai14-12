#include<stdio.h>
void nhap(int &n,int &b)
{
    printf("Nhap N=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",b);
    }
}
int tong(int n, int a[10000])
{
    int t=0;
    for(int i=1;i<=n;i++)
    {
        t+=a[i];
    }
    return t;
}
int main()
{
    int n,b;
    nhap(n, b);
   // printf("Tong cac phan tu mang la: %d",tong(n,a));
}
