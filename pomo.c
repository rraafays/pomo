#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  for (int m = 1; m >= 0; m--)
  {
    int s = 0;
    for (s = 59; s >= 0; s--)
    {
      sleep(1);
      printf("\r%02d:%02d", m, s);
      fflush(stdout);
    }
    s = 59;
  }

  return 0;
}
