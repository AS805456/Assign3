#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  printf(1, "This is a test function that should print a number %d\n", getreadcount());
  exit();
}
