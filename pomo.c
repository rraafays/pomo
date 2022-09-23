#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  printf("Hello");
  fflush(stdout);
  sleep(1);
  printf("\rWorld!");
  return 0;
}
