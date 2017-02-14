#include <stdio.h>
#include <string.h>

void print_secrets() {
  printf("alwaysbekind");
}

void hello(char* name) {
  char message[16] = "hello, ";
  strcpy(message + 7, name);
  printf("%s\n", message);
}

int main(int argc, char** argv) {
  if (argc > 1) {
    hello(argv[1]);
  }

  return 0;
}
