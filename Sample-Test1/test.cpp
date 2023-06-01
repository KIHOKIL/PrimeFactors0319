#include "pch.h"
#include "../PrimeFactor/primefactor.cpp"

using namespace std;

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	PrimeFactor prime_factor;
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	PrimeFactor prime_factor;
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of3) {
	PrimeFactor prime_factor;
	expected = {3};
	EXPECT_EQ(expected, prime_factor.of(3));
}