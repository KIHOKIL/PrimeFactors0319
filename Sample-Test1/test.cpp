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

TEST_F(PrimeFixture, Of4) {
	PrimeFactor prime_factor;
	expected = {2,2};
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, Of5) {
	PrimeFactor prime_factor;
	expected = {2,3};
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, Of6) {
	PrimeFactor prime_factor;
	expected = { 3,3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFixture, Of7) {
	PrimeFactor prime_factor;
	expected = { 2,2,3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}