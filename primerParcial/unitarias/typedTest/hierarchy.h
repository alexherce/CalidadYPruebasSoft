#include <iostream>
using namespace std;

class Base {
public:
  virtual int doSomething() = 0;
};

class Child1: public Base
{
public:
  int doSomething()
  {
    cout << "Im in child 1";
    return 1;
  }
};

class Child2: public Base
{
public:
  int doSomething()
  {
    cout << "Im in child 2";
    return 1;
  }
};

class Child3: public Base
{
  int value;
public:
  Child3(int value): value(value){}

  int doSomething()
  {
    cout << "Im child 3 with value " << value << endl;
    return 1;
  }
};
