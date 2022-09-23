#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  for (int i = 0; i < 10; i++)
  {
    printf("\r%d", i + 1);
    sleep(1);
    fflush(stdout);
  }

  return 0;
}
