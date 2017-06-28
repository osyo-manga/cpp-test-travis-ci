#define CATCH_CONFIG_MAIN
#include "./catch.hpp"

#include <vector>

TEST_CASE("test", "std::vector"){
	std::vector<int> v{};
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	REQUIRE(( v == std::vector<int>{1, 2, 3} ));
	REQUIRE(( v == std::vector<int>{1, 2, 4} ));
}


