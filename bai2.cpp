#include<stdio.h>
int main()
{
    long n,c=0,l=0,a[10000],x,d=0,i;
    char m;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld",&a[i]);
        if(a[i]%2==0) c++;
        else l++;
    }
    scanf("%ld",&x);
    for(i=1;i<=n;i++)
    {
        if(a[i]==x) d++;
    }
    scanf("%s",&m);
    if(m=='c') printf("Cac so chan la: %ld",c);
    else printf("Cac so le la: %ld",l);
    printf("So lan xuat hien cua %ld la: %ld",x,d);
}
