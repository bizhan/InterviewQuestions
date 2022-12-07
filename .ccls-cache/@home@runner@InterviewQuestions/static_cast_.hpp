#include <iostream>
using namespace std;

// 1. It performs implicit conversions between types.
namespace static_cast_{
void run_static_first()
{
  cout<<"hello static cast 1"<<endl;
  float f = 3.5;

  // Both below lines are valid do the same thing, however, in long program when trying
  // To debug it is much easier to search for static_cast keyword. 
  int a;
  a = f;
  a = static_cast<int>(f);
  cout<<a<<endl;
}

// 2. use static_cast when conversion between types is provided through conversion operator or
//    conversion constructor.
class Int {
  int x;
public:
Int(int x=0): x(x) {
  cout<<"conversion constructor"<<endl;
}
operator string () { 
  cout<<"conversion operator"<<endl;
  return to_string(x);}
operator float () {
  cout<<"conversion float"<<endl;
  return static_cast<float>(x);}
};

void run_static_second(){
  cout<<"1"<<endl;
  Int obj(3);
  cout<<"2"<<endl;
  string str1 = obj;

  // This is interesting.
  // If you have a constructor that takes only one parameter
  // and for this case is integer. The below statement calls the constructor and pass the integer
  // value of 20
  cout<<"3"<<endl;
  obj = 20;
  cout<<"4"<<endl;
  // statement string str1 = obj works the same as be
  string str2 = static_cast<string>(obj);
  cout<<"5"<<endl;
  obj = static_cast<Int>(30);
  cout<<"6"<<endl;
  float flt = obj;
  cout<<flt<<endl;
}

// 3. static_cast is more restrictive than C-style.
//    Example: char* to int* is allowd in C-style, but not with static cast.

void run_static_third() {
  char c;
  int *p = (int*)&c;
  *p = 5;
  //below line fails
  // int* ip = static_cast<int*>(&c);
  
}

// 4. static_cast avoid cast from derived to private base pointer.
class Base_4{};
// for :private the cast at line 78 fails
class Derived_4: public Base_4{};
class Derived_5: public Base_4{};

void run_static_4(){
  Derived_4 d1;
  Base_4 *pb1 = (Base_4*)&d1;
  Base_4 *pb2 = static_cast<Base_4 *>(&d1);
  Derived_4 *pd4 = static_cast<Derived_4*>(&d1);
}

// 5.Use for all upcasts, but never use for confused down cast
void run_static_5(){
  Derived_4 d4;
  Derived_5 d5;

  // Going from Drived to Base is allowed.
  Base_4 *pb1 = static_cast<Base_4*>(&d4);
  Base_4 *pb2 = static_cast<Base_4 *>(&d5);

  // Going from Base to drive is not allowed
  // Derived_4 *pd4 = static_cast<Derived_4*>(&pb2);
  // Derived_5 *pd5 = static_cast<Derived_5*>(&pb1);
}

// 6. static_cast should be prefered when converting to void* OR from void*
void run_static_6() {
  int i = 10;
  void *v = static_cast<void*>(&i);
  int *ip = static_cast<int*>(v);
}
}