#define CATCH_CONFIG_MAIN
#include "./catch.hpp"

#include <vector>
#include <list>

template<typename List>
void func(){
	List v;
	
	SECTION("List.push_back"){
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);

		REQUIRE((v == List{1, 2, 3}));
	}

	v.resize(3);
    REQUIRE( v.size() == 5 );

    SECTION( "resizing bigger changes size and capacity" ) {
        v.resize( 10 );

        REQUIRE( v.size() == 10 );
    }
    SECTION( "resizing smaller changes size but not capacity" ) {
        v.resize( 0 );

        REQUIRE( v.size() == 0 );
    }
}

TEST_CASE("Test", "STL Container"){
	func<std::vector<int>>();
	func<std::list<int>>();
}
