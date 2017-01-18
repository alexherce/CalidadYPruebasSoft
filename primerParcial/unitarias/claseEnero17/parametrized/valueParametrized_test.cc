#include "gtest/gtest.h"
#include "functions.h"

class FixValParam: public testing::TestWithParam<int>
{
  public:
    void SetUp(){}
    void TearDown(){}
};

TEST_P(FixValParam, Pares)
{
  if(GetParam() % 2 == 0)
    EXPECT_EQ(true, isEven(GetParam()));
  else
    EXPECT_EQ(false, isEven(GetParam()));
}

TEST_P(FixValParam, Impares)
{
  if(GetParam() % 2 == 0)
    EXPECT_EQ(false, isOdd(GetParam()));
  else
    EXPECT_EQ(true, isOdd(GetParam()));
}

// -----------------------
// INSTANTIATE_TEST_CASE_P(UsingValues, FixValParam, testing::Range(1,2,3,4,5,6,7,8,9));
// -----------------------
// int array[] = {1,2,3,4,5,6,7,8,9};
// INSTANTIATE_TEST_CASE_P(UsingValuesIn, FixValParam, testing::ValuesIn(array));
// -----------------------
INSTANTIATE_TEST_CASE_P(UsingRange, FixValParam, testing::Range(-10,50,1));
// -----------------------
