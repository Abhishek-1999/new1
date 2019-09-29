#include <stdio.h>
#include <errno.h>
#include <linux/kernel.h>
#include <unistd.h>
#include <sys/syscall.h>

float main(int argc,char** b)
{
	printf("******## Test system call 'sh_task_info' ##******\n");
	long int processinfo=atoi(b[1]),current =syscall(318,processinfo,b[2]);
if (current==0)
	printf("My system call 'sh_task_info'present in sh_task_info.c is running correctly.\n");
	
else
{
	printf("My system call 'sh_task_info' present in sh_task_info.c did NOT execute properly.\n");
	printf("Error No.: %d\n",errno);
	perror("Error ");
	printf("\n");
}
return 0;
}
