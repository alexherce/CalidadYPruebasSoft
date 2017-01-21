#include "gtest/gtest.h"
#include "../cifrado/cifrado.h"

string cesar, vigenere;

template<class instanceType>
class FixTyped: public testing::Test
{
public:
  FixTyped()
  {
    instance2Test = new instanceType;
  }
  ~FixTyped()
  {
    delete instance2Test;
    instance2Test = NULL;
  }

protected:
  Cifrado* instance2Test;
};

typedef testing::Types<Cifrado> implementations;

TYPED_TEST_CASE(FixTyped, implementations);

TYPED_TEST(FixTyped, enteros)
{
  EXPECT_EQ(1, this->instance2Test->cargar_diccionario());
  EXPECT_EQ(1, this->instance2Test->cargar_encriptado(cesar, vigenere));
}

TYPED_TEST(FixTyped, strings)
{
  EXPECT_EQ("GARDEN", this->instance2Test->cesar_decrypt(cesar, 1));
}
