#pragma once

class Const{
int x;
// mutable a const function can change x1
mutable int x1;
int y;

public:
Const() {}
Const(int a): x(a), y(0) {}
Const(int a, int b): x(a), y(b) {}

void setX(int a){x = a;}
// getX does  not change any data member
int getX() const {return x;}
// however the following fails
// because it modifiy the content of x
// int getX() const {x = 20; return x;}

// Example of const function can change a mutable variable
int getX1() const {x1 = 20; return x1;}
// Error below
// int getX2() const {x1 = 20; y= 30; return x1;}


void run_const();
};