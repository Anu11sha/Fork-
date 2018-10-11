#include<stdio.h>
int main()
{
  for (int i=0;i<4;i++)
  {
    int cpid=fork();
    printf("Hello\n");
  }
  printf("Exiting Process\n");
  return 0;
}
