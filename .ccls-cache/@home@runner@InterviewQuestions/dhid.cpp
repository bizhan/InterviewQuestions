#include "dhid.hpp"
/*
void AbcPlayer::run_dhid() {
  cout<<"Hello Data Hidding"<<endl;
  setVolume(10);
}
*/
void Derived::run_derived() {
  cout<<"Hello Derived Class"<<endl;
  fun('a');
  fun(5);
  Base::fun(8);
  
}