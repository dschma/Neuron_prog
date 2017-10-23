#include <iostream>
#include "neurone.hpp"
#include "googletest/include/gtest/gtest.h"

TEST(neuronTest, membrane_potential)
{
	Neurone neurone;
	//neurone.set_i_ext(1.0);
	
	neurone.update(1);
	EXPECT_EQ(20.0*(1-std::exp(-0.1/20.0)), neurone.getPotential());
	
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
