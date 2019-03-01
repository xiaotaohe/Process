#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int pid = 0;
	int count = 0;
	printf("this is father process!\n");
	pid = fork();
		count++;
if(pid == -1)
		printf("fork error!\n");
	else if(pid == 0)
	{
		printf("this is child process,count = %d,return pid is %d\n",count,getpid());
		exit(0);
	}
	else
	{
		printf("this is father process,count = %d,pid is %d\n",count,pid);
		exit(1);
	}
	return 0;
}

