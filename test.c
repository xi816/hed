#include <stdio.h>
#include <curses.h>

int main(int argc, char** argv) {
  initscr();
  cbreak();
  raw();
  unsigned char c = getchar();
  printf("%02X", c);
  endwin();

  return 0;
}

