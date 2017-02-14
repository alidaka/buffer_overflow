#include <stdio.h>
#include <string.h>

void print_secrets() {
  printf("alwaysbekind\n");
}

void hello(char* name) {
  char message[16];
  strcpy(message, name);
  printf("hello, %s!\n", message);
}

int main(int argc, char** argv) {
  if (argc > 1) {
    hello(argv[1]);
  }

  return 0;
}
