#include <stdio.h>
#include <unistd.h>
#include <string.h>

int multistrcmp(char* a1, char* a2, char* b1, char* b2) {
  return strcmp(a1, b1) == 0 && strcmp(a2, b2) == 0 ||
         strcmp(a1, b2) == 0 && strcmp(a2, b1) == 0;
}
int main(int argc, char* argv[]) {
  if (argc <= 2) {
    printf("Takes two to mix.\n");
    return 1;
  }
  int i;
  for (i = 1; i < argc; i++) {
    if (access(argv[i], F_OK) == -1) { // file doesn't exist
      printf("You don't have %s.\n", argv[i]);
      return 1;
    }
  }
  if (multistrcmp(argv[1], argv[2], "flour", "sugar")) {
    fclose(fopen("dry_mix", "w"));
  } else if (multistrcmp(argv[1], argv[2], "milk", "eggs")) {
    fclose(fopen("wet_mix", "w"));
  } else if (multistrcmp(argv[1], argv[2], "dry_mix", "wet_mix")) {
    fclose(fopen("batter", "w"));
  } else if (multistrcmp(argv[1], argv[2], "batter", "bacon")) {
    fclose(fopen("bacon_pancakes", "w"));
  } else {
    printf("%s and %s are not a valid combination.\n", argv[1], argv[2]);
    return 1;
  }
  return 0;
}

