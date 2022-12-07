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

// Function Hiding
class Base {
public:
void fun(int i) {
  cout<<"Baseh"<<endl;
}
};

class Derived: public Base{
public:
// Without below statment, the "fun" function is called in both cases of int and char parameter, in this case the 'fun' function of the Baseh is hidden .
// However you can work around this with calling d.Baseh:fun(..)
// The below statement says all the function in the Baseh should have the scope in the Derived class, as long as the name of the function is same regardless of number of the parameters and types.
// Also if the function and parameters are identical on both Base and Derive, the Derive function is invoked.
using Base::fun;
void fun(char c){
  cout<<"Derived"<<endl;
}
void run_derived();
};