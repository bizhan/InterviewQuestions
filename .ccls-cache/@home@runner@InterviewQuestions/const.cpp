#include <iostream>
#include "const.hpp"
using namespace std;

void Const::run_const(){
  cout<<"Hello Const"<<endl;
  Const const_;
  const_.setX(10);
  cout<< const_.getX()<<endl;
}