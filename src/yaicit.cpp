#include <bar/bar.h>
#include <sequences/sequences.h>
#include <iostream>

int main(int argc, char** argv) {
  std::cout << bar::next(sequences::collatz(3)) << std::endl;
  return 0;
}
