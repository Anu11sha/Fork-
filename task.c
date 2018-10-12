#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include<sys/wait.h>
int main ()
{
 int fd0[2],fd1[2],fd2[2],fd3[2],fd4[2],fd5[2],fd6[2],fd7[2],fd8[2],fd9[2];
 pipe(fd0);
 pipe(fd1);
 pipe(fd2);
pipe(fd3);
pipe(fd4);
pipe(fd5);
pipe(fd6);
pipe(fd7);
pipe(fd8);
pipe(fd9);

 int arr[1000];
 int sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,fsum=0;
 char str[10],ou[10];
 for (int i=0;i<1000;i++)
{	arr[i]=i;

}
  int cpid=fork();
 if (cpid==0)
 {
	
   for (int i=0;i<100;i++)
      sum=sum+arr[i];
	
    sprintf(str,"%d",sum);
    write(fd0[1],str,strlen(str)+1);
		
	close(fd0[1]);
 }
 else 
 {
  	cpid=fork();
   if (cpid==0)
   {
     for (int i=100;i<200;i++)
       sum=sum+arr[i];

    sprintf(str,"%d",sum);
    write(fd1[1],str,strlen(str)+1);
printf("\nsusm %s",str);
	close(fd1[1]);	
   } 
   else 
   {
     cpid=fork();
     if (cpid==0)
     {
       for (int i=200;i<300;i++)
         sum=sum+arr[i];
	sprintf(str,"%d",sum);
	write(fd2[1],str,strlen(str)+1);	
	close(fd2[1]);	
     }
     else 
     {
 	cpid=fork();
     	if (cpid==0)
     	{
       	for (int i=300;i<400;i++)
         sum=sum+arr[i];
	sprintf(str,"%d",sum);
	write(fd3[1],str,strlen(str)+1);	
	close(fd3[1]);	
     	}
	else 
	{
	cpid=fork();
     	if (cpid==0)
     	{
       	for (int i=400;i<500;i++)
         sum=sum+arr[i];
	sprintf(str,"%d",sum);
	write(fd4[1],str,strlen(str)+1);	
	close(fd4[1]);	
     	}
	else 
{
	cpid=fork();
     	if (cpid==0)
     	{
       	for (int i=500;i<600;i++)
         sum=sum+arr[i];
	sprintf(str,"%d",sum);
	write(fd5[1],str,strlen(str)+1);	
	close(fd5[1]);	
     	}
else 
{
cpid=fork();
     	if (cpid==0)
     	{
       	for (int i=600;i<700;i++)
         sum=sum+arr[i];
	sprintf(str,"%d",sum);
	write(fd6[1],str,strlen(str)+1);	
	close(fd6[1]);	
     	}     
else 
{
cpid=fork();
     	if (cpid==0)
     	{
       	for (int i=700;i<800;i++)
         sum=sum+arr[i];
	sprintf(str,"%d",sum);
	write(fd7[1],str,strlen(str)+1);	
	close(fd7[1]);	
     	}
else
{
cpid=fork();
     	if (cpid==0)
     	{
       	for (int i=800;i<900;i++)
         sum=sum+arr[i];
	sprintf(str,"%d",sum);
	write(fd8[1],str,strlen(str)+1);	
	close(fd8[1]);	
     	}
else 
{
cpid=fork();
     	if (cpid==0)
     	{
       	for (int i=900;i<1000;i++)
         sum=sum+arr[i];
	sprintf(str,"%d",sum);
	write(fd9[1],str,strlen(str)+1);	
	close(fd9[1]);	
     	}
     else 
     {
	wait(NULL);
	wait(NULL);
	wait(NULL);
	wait(NULL);
	wait(NULL);
	wait(NULL);
	wait(NULL);
	wait(NULL);
	wait(NULL);
	wait(NULL);
	read(fd0[0],ou,10);
	sum=atoi(ou);
	read(fd1[0],ou,10);
	sum1=atoi(ou);
	read(fd2[0],ou,10);
	sum2=atoi(ou);
read(fd3[0],ou,10);
	sum3=atoi(ou);
	read(fd4[0],ou,10);
	sum4=atoi(ou);
	read(fd5[0],ou,10);
	sum5=atoi(ou);
read(fd6[0],ou,10);
	sum6=atoi(ou);
	read(fd7[0],ou,10);
	sum7=atoi(ou);
	read(fd8[0],ou,10);
	sum8=atoi(ou);
read(fd9[0],ou,10);
	sum9=atoi(ou);
	
	fsum=sum+sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9;
	 printf("final sum \n%d",fsum);
     }	
   }
  }  
}}}}}}}}
