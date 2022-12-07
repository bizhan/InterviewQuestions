#include <iostream>
using namespace std;

// Friend function and Friend class in C++
// 1. Keyword "friend" is used to make some {fuction or class} as friend of your class.
// 2. Friend function or friend class can access private/public/protected Data member OR
//     member Functions of another class.
// 3. Function can not become friend of function.
// 4. Friendship is not mutual. If a class A is friend of B, B doesn't become friend of A automatically.
// 5. Frienship is not inherited.
namespace Friend {

class Base {
  // protected or private
protected:
  int x;

public:
  Base() {}
  Base(int a) : x(a) {}
  int getX() { return x; }
  // below function is accessing and setting class variable from inside the
  // class. void set(int a) {x=a;}
  // below function accessing and setting class variable from friend function.
  friend void set(Base &, int);
  friend int get(Base &);
  // Friend class
  friend class GetSet;
  void run_friend();
};
// The friend function of Base can not access the Derived class members.
// Friend is not inherited.
// class Derived : public Base {
// public:
//   void set()
// }

class GetSet {
public:
  void set(Base &obj, int x);
  int get(Base &obj);
};
} // namespace Friend