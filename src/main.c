#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	printf("Hello systemd world \n");
	fflush(NULL);
	sleep(5);
	return (EXIT_SUCCESS);
}
