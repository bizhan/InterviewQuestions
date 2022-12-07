#include <iostream>
#include "const.hpp"
#include "dhid.hpp"
#include "encap.hpp"
#include "void.hpp"
#include "Friend.hpp"
#include "static_cast_.hpp"
#include "dynamic_cast.hpp"
#include "reinterpret_cast.hpp"

int main() {
  std::cout << "Hello World!\n";
  Test test;
  // test.test_pr();
  // test.test_func();
  Encap encap;
  // encap.run_encap();
  Const const_;
  // const_.run_const();
  AbcPlayer abc;
  // abc.run_dhid();
  Derived derive;
  //derive.run_derived();
  Friend::Base FB(30);
  //FB.run_friend();
  //static_cast_::run_static_first();
  // static_cast_::run_static_second();
  // static_cast_::run_static_4();
  // static_cast_::run_static_5();
  // static_cast_::run_static_6();
  //dynamic_cast_::run_dynamic_1();
  //reinterpret_cast_1::run_reinterpret
  volatile const int i = 9;
  volatile const int *p = &i;
  cout<<*p<<" "<< i <<endl;
  *p--;
  cout<<*p<<" "<< i <<endl;

}