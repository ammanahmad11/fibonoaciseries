#include<stdio.h>
void f(int);
int main(){

int n;
printf("enter the number");
scanf("%d",&n);
f(n);
return 0;
}
void f(int x)
{
    static int a=0,b=1,c;
    if(x>0)
    {
     printf("%d\t",a);
     c=a+b;
     a=b;
     b=c;
     f(x-1);

    }

}
