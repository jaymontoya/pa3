/* --------------------------------

  BigIntegerTest.c | PA3
  Programmer: Jay Montoya
  UCSC ID: jaanmont | 1742317

  Test client for BigInteger ADT for pa3.

-----------------------------------
*/
#include <stdio.h>
#include <stdlib.h
>
#include "BigInteger.h"

// main
int main(int argc, char* argv[]) {

  // create a big integer list
  BigInteger A;


  char myString9[] = "-0";

  A = stringToBigInteger(myString9);

  free(myString9);
  *myString9 = NULL;



  // free memory associated with the big integer
  freeBigInteger(&A);

  return 0;
}
