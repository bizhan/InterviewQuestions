#include <iostream>
using namespace std;

//dynamic_cast <new_type> (exprression)
// 1. dynamic_cast is used at run time to find out correct down-cast.
// Note0: Need at least one virtual function in base class.
// Note1; If the cast is successful, dynamic_cat returns a value of null pointer of that type.
// Note2: If the cast fails and new_type is a pointer type, it returns a null pointer of that type.
// Note3: If the cast fails and new_type is a reference type, it throws an exception that matches a
//        handler of type std::bad_cast.

namespace dynamic_cast_ {
class Base {
virtual void print() { cout<< "Base"<<endl;}
};
class Derived1: public Base {
void print() {cout<< "Drrived1" <<endl;}
};
class Derived2: public Base{
void print() {cout<< "Drrived2" <<endl;}
};

void run_dynamic_1() {
  cout<<"Hello Dynamic"<<endl;
  Derived1 d1;
  // below line valid 
  Base *bp= dynamic_cast<Base*>(&d1);
  // below is not good
  Derived2 *dp2 = dynamic_cast<Derived2*>(bp);
  if(dp2 == nullptr)
    cout<<"Null ptr"<<endl;
  else
    cout <<"not null"<<endl;

  // below is good (down cast)
  Derived1 *dp1 = dynamic_cast<Derived1*>(bp);
  if(dp1 == nullptr)
    cout<<"Null ptr"<<endl;
  else
    cout <<"not null"<<endl;
}

// Notes:
// 1. work only on polymorphic base classes (at least one virtual function), use the info regarding down cast
// 2. It is used for up-cast (D->B) and down-cast (B->D), but mainly for downcast.
// 3. using this cast has run time overhead, it uses RTTI
// 4. if we are sure that we will never cast to wrong object, should not use it.

}// namespace dynamic_cast