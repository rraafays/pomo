#include <stdio.h> // includes standard input output header file for printf function
#include <unistd.h> // includes unix standard header file for sleep function

int main(int argc, char *argv[]) // proper version of int main() which includes args and arg counter
{
  int s = 0; // declares an empty integer used as seconds
  while (1) // infinite while loop
  {
    for (int m = 24; m >= 0; m--) // 2d for loop to deduct minutes every 60 seconds
    {
      for (s = 59; s >= 0; s--) // 60 second timer
      {
        printf("\r%02d:%02d 🍅 Work time!", m, s);
        fflush(stdout);
        sleep(1);
      }
      s = 59; // resets seconds every complete cycle
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

  return 0; // gracefully exits program should while loop break
}
