#include <stdio.h>
#include <stdlib.h>
#include "Matrix.h"
#include "string.h"
#define MAX_BUFFER 50

int main(int argc, char** argv) {
  // 1) Check that there are two command line arguments (other than the program
  // name). Quit with a usage message to stderr if more than or less than
  // two strings are given on the command line.
  printf("You entered %d arguments...\n" , argc);

  for (int i = 0; i < argc; ++i)
    printf("%s ", argv[i]);

  if (argc != 3) {
    fprintf(stderr, "%s", "STDERR: bad argument structure\n");
    exit(1);
  }

  // declare files
  FILE* inFile;
  FILE* outFile;

  // open streams to files
  inFile = fopen(argv[1], "r");
  outFile = fopen(argv[2],"w");

  // read the entire line
  /*while(fgets(str, MAX_BUFFER, inFile) != NULL) {
    strcpy(inputArray[j], str);
  }*/

  // scan the top of the file to get the length of the number on line 2
  int n;
  char string1[];
  int m;
  char string2[];
  fscanf(inFile, "%d\n%s\n%d\n%s\n", &n, &m , &string1, &string2);

  printf("%d %d", n, m);

  

  return 0;
}