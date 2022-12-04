#include <iostream>
#include "void.hpp"
using namespace std;
void fun() {}
void Test::test_func(){
  cout<<"hello VOID"<<endl;
  int *a = new int(10);
  void *v = static_cast<void*>(a);
  cout<<*a<<endl;
  // Can not dereference void*
  // cout<<*v<<endl;
  // but it works if it is static cast to its origial pointer
  cout<<*(static_cast<int*>(v))<<endl;

  //Can not convert function pointer to void*
  //void *f = static_cast<void*)(fun);

  const int*i = new int(10);
  //Can not convert const or volatile variable to void*
  //void *v = static_cast<void*>(i);

  //Note:  void* used to creat generic funcions in c.
  //Note: (int*) is the same as static_cast<int*>

  
}
