#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char cmd[1024];
  strcpy(cmd, "./a.out ");
  strcat(cmd, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAa");
  system(cmd);
  return 0;
}
