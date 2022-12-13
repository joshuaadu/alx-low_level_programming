#include "header.h"

/**
 * main - PID
 *
 */

int main(void)
{
	pid_t mypid, my_parent_pid;

	mypid = getpid();
	my_parent_pid = getpid();

	printf("My PID: %u\n", mypid);
	printf("My Parent PID: %u\n", my_parent_pid);

	return (0);
}

