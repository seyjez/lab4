#include <header.hpp>
#include <iostream>


int main() {
  std::string path("/home/user/Desktop/c++/lab4/misc/ftp");
  Filesystem test(path);
  std::cout << test;
}