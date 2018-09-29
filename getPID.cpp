#include <iostream>
extern "C" {
#include <sys/types.h>
#include <unistd.h>
}
extern "C" {
  void printPid() {
    std::cout << getpid() << std::endl;  
  }
}

int main() {
  printPid();
}
