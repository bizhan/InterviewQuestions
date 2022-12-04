#pragma once
#include <iostream>
using namespace std;

// 1. Data hiding is about data member in classes, we keep data members as private and this is considered as data hiding.
// It is not about hacking or something, it is about correctness of the data and preventing accidental maniuplation.

class AbcPlayer{
int volume;
public:
AbcPlayer():volume(0) {}
void setVolume(int x) {
  if (x >= 0 && x <= 100) {
    volume = x;
    cout << "Set volume to: "<<x<<endl;
  } else {
    cout << "Can not Set volume to: "<<x<<endl;
  }
}
void run_dhid();
};


class Base {
public:
int fact(int i) {
  cout<<"Baseh"<<endl;
}
};

class Derived: public Base{
public:
using Base::fact;
void fact(char c){
  cout<<"Derived....."<<endl;
}
// int fun(int i) {
//   cout<<"Derived" <<endl;
// }
void run_derived();
};