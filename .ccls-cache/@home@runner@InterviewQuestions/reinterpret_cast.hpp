#include <iostream>
using namespace std;

// 1. It can perform dangerous conversions because it can typecast any pointer to any other ptr.
namespace reinterpret_cast_{
class Mango{
public:
void eatMango() { cout<< "eating Mango"<<endl;}
};

class Banana {
public:
void eathBanana() {cout<< "eatcing Banana"<<endl;}
};

void run_reinterpret() {
  cout <<"hello reinterpret"<<endl;
  // Banana *b = new Banana();
  // Mango *m = new Mango();
  // Banana *newBan = reinterpret_cast<Banana *>(m);
  // newBan->eatBanana();
}

}