#include"program.h"

int main(int argc, char *argv[])
{
	printf("Parent:: pid=%d\n",getpid());
	if(fork() == 0)
	{
		printf("Child:: Created\n");
		printf("Child:: pid=%d\n",getpid());
		
		if(fork() == 0)
		{
			printf("Child's Child:: Created\n");
			printf("Child's Child:: pid=%d\n",getpid());
			printf("Child's Child:: Terminating\n");
		}
		else
			printf("Child:: Terminating\n");	
	}
	else
		printf("Parent:: Terminating\n");
}

