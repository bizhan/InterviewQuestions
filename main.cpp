#include "const.hpp"
#include "dhid.hpp"
#include "encap.hpp"
#include "void.hpp"
#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  Test test;
  // test.test_pr();
  // test.test_func();
  Encap encap;
  // encap.run_encap();
  Const const_;
  // const_.run_const();
  //AbcPlayer abc;
  // abc.run_dhid();
  Derived derive;
  derive.run_derived();
}