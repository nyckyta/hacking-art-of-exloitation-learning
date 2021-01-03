#include <stdio.h>
#include <string.h>

const char shellcode[] = "\x31\xc0\xb0\x01\x31\xdb\xcd\x80";

int main(int argc, char const *argv[]) {
  char buffer[100]; //variable on stack

  if (argc < 2) {
    printf("Specify your name to say hello to the world\n");
    return -1;
  }

  strcpy(buffer, argv[1]);

  printf("Hello world, my name is %s\n", buffer);

  return 0;
}
