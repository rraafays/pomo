#include <stdio.h> // includes standard input output header file for printf function
#include <unistd.h> // includes unix standard header file for sleep function
#include <string.h> // includes standard string library for strcmp function

void timer(int m, char t[]);

int main(int argc, char *argv[]) // proper version of int main() which includes args and arg counter
{
  while (1) // infinite while loop
  {
    timer(25, "🍅 Work time!");
    timer(5, "🍵 Break time, grab some tea");
  }
  return 0; // gracefully exits program should while loop break
}

void timer(int m, char t[]) // function which takes in a number of minutes represented by 'm' and also takes in a string represented by 't'
{
  int s = 0; // declares an empty integer used as seconds
  for (int x = m; x >= 0; x--) // 2d for loop to deduct minutes every 60 seconds
  {
    for (s = 0; s >= 0; s--) // 60 second timer
    {
      printf("\33[2K\r"); // clears the current line
      printf("%02d:%02d %s", x, s, t);
      fflush(stdout); // cleans the output
      sleep(1); // sleeps for 1 second
      if (x == 0 && s == 0) { break; }
      if (s == 0) { x--; s = 60; } // if we hit 0 seconds then it deducts a minute and resets to 60
    }
  }
}
