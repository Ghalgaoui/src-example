#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/param.h>

#ifndef MAXHOSTNAMELEN
#define MAXHOSTNAMELEN  64
#endif

int main(void)
{
	char hostname[MAXHOSTNAMELEN];

	gethostname(hostname, MAXHOSTNAMELEN);
	hostname[MAXHOSTNAMELEN - 1] = '\0';

	fprintf(stdout, "Simple hello from %s (built without Makefile)\n", hostname);

#ifndef NDEBUG
	fprintf(stdout,"  [DEBUG MODE]\n");
#endif

#ifdef MY_OPTION
	fprintf(stdout, "  [MY OPTION]\n");
#endif

	return EXIT_SUCCESS;
}

