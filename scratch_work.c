#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int main(int argc, char **argv)
{
  // Load config files, if any.

  // Run command loop.
  printf("hi");

  // char *cmd = "ls";
  // char *thing[3];
  // thing[0] = "ls";
  // thing[1] = "-la";
  // thing[2] = NULL;
  // execvp(cmd, thing);
  //
  // char *cmd = "ls";
  // char *thing[3];
  // thing[0] = "ls";
  // thing[1] = "-la";
  // thing[2] = NULL;
  // execvp(cmd, thing);
  int c;
  while((c = getchar())!= EOF)
  {
   if( getchar() == EOF )
     break;
   printf(" %d\n", c);
  }
   printf("%d %u %x- at EOF\n", c , c, c);


  // Perform any shutdown/cleanup.

  return 0;
}
