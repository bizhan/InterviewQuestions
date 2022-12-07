#include "Friend.hpp"
#include <iostream>
using namespace std;
using namespace Friend;

// Note: The implementation of the Friend function
// should be outside of the namespace.
// Also it seems I still need to use scope resolution of the
// namespace Friend, after using namespace Friend ????
void Friend::set(Base &obj, int x) { obj.x = x; }
int Friend::get(Base &obj) { return obj.x; }

void Friend::GetSet::set(Base &obj, int x) { obj.x = x; }
int Friend::GetSet::get(Base &obj) { return obj.x; }

void Base::run_friend() {
  cout << "Hello Friend" << endl;
  Base obj(10);
  // Here is using 'get' member function
  cout << obj.getX() << endl;
  set(obj, 30);
  // Here is using 'get' friend function
  cout << get(obj) << endl;
  GetSet gs;
  gs.set(obj, 50);
  cout << gs.get(obj) << endl;
}

