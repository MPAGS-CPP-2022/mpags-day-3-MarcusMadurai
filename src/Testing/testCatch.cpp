//test that Catch is working for us
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Addition works", "[math]"){
    REQUIRE(1+1 == 2);
}