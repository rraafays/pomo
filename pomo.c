#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  int s = 0;
  while (1)
  {
    for (int m = 24; m >= 0; m--)
    {
      for (s = 59; s >= 0; s--)
      {
        printf("\r%02d:%02d 🍅 Work time!", m, s);
        fflush(stdout);
        sleep(1);
      }
      s = 59;
    }

    for (int m = 4; m >= 0; m--)
    {
      for (s = 59; s >= 0; s--)
      {
        printf("\r%02d:%02d 🍵 Break time grab some tea! ", m, s);
        fflush(stdout);
        sleep(1);
      }
      s = 59;
    }
  }

  return 0;
}
