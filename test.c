#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define BILLION 1000000000L
#define MSGSIZE 0
char* msg1 = "";
int main (void) {
  struct timespec start, end;
  long long unsigned int printDiff, writeDiff, totalDiff;
  //long long unsigned int writeDiff;
  //long long unsigned int totalDiff;
  int p[1];

  // get printf time 
  clock_gettime(CLOCK_MONOTONIC, &start);	/* mark start time */
	printf("");
  clock_gettime(CLOCK_MONOTONIC, &end);	/* mark the end time */

	printDiff = BILLION * (end.tv_sec - start.tv_sec) + end.tv_nsec - start.tv_nsec;

  // get system call write time
  clock_gettime(CLOCK_MONOTONIC, &start);	/* mark start time */
	write(p[1], msg1, MSGSIZE);
  clock_gettime(CLOCK_MONOTONIC, &end);	/* mark the end time */

  writeDiff = BILLION * (end.tv_sec - start.tv_sec) + end.tv_nsec - start.tv_nsec;
  close(p[1]);
  
  totalDiff = writeDiff - printDiff;
  
  printf("Printf is faster than write call by %llu nanoseconds\n", totalDiff);

}