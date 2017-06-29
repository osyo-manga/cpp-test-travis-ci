#include <gtest/gtest.h>
#include <vector>
#include <list>


template<typename T>
struct container_test : testing::Test{};

using target_types = testing::Types<std::list<int>, std::vector<int>>;
TYPED_TEST_CASE(container_test, target_types);



TYPED_TEST(container_test, push_back){
	auto v = TypeParam{};
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	EXPECT_EQ(v, (TypeParam{1, 2, 4}));
}



