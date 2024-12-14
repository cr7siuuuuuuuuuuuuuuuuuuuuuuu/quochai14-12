#include<stdio.h>
int hieu(int a,int b)
{
    return a-b;
}
int main()
{
    int x,y,t;
    scanf("%d%d",&x,&y);
    t=hieu(x,y);
    printf("Hieu hai so la: %ld", t);
}
