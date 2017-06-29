#define CATCH_CONFIG_MAIN
#include "./catch.hpp"

#include <vector>
#include <list>

template<typename List>
void func(){
	List v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	REQUIRE((v == List{1, 2, 3}));
	REQUIRE((v == List{1, 2, 5}));
}

TEST_CASE("test", "STL Container"){
	func<std::vector<int>>();
	func<std::list<int>>();
}
