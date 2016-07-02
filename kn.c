#include<stdio.h>
int main(void){
int a,b[1000],i,j,sum=0,sum1=0,n=0,n1=0,avg,avg1;
scanf("%d",&a);
for(i=0;i<a;i++)
scanf("%d",&b[i]);
for(i=0;i<n/2;i++)
{
sum+=b[i];
n++;
}
for(i=a/2;i<a;i++);
{
sum1+=b[i];
n1++;
}
avg=sum/n;
avg1=sum1/n1;
if(avg==avg1)
printf("yes");
else
printf("No");
return 0;
}
