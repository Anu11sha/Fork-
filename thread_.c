#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
int ar[1000];
int chunk_size=100;
void * TestThread(void *arg)
{
	int i=0,sum1=0;
	int start=(int)arg;
	int end=start+chunk_size;
	for ( i=start;i<end;i++)
		sum1=sum1+ar[i];
	return ((void*)sum1);
}

int main ()
{
	int i=0;
	for ( i=0;i<1000;i++)
		ar[i]=i;
	int sum[10];
	int sum1=0;
	pthread_t thread_t1[10];
	for (i=0;i<10;i++)
		pthread_create(&thread_t1[i],NULL,TestThread,((void*)(i*100)));

	for (i=0;i<10;i++)
		pthread_join(thread_t1[i],(void**)&sum[i]);

	for (i=0;i<10;i++)
	sum1=sum1+sum[i];
	printf("\nValue returned By Thread %d\n", sum1);
	return 0;
}
