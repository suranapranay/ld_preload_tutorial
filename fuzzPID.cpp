#include <sys/types.h>
#include <stdio.h>

extern "C" {

  pid_t getpid(void) {
    printf ("intercepted");
    return (pid_t) 1369;
  }

}

