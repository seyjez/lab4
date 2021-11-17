#include <header.hpp>
#include <iostream>


int main() {
  // path  менять в зависимости от системы
  std::string path("/home/enigma/twinLabs/c++ developer/lab 4/lab-04-boost-filesystem/misc/ftp");
  Filesystem test(path);
  std::cout << test;
}