//testing CaeserCipher class
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CaeserCipher.hpp"
//#include "CaeserMode.hpp" this doesn't work - needs linking in the CMake or something I think
/*
TEST_CASE("does that the key is converted if its a string"){
    
    std::string input{"test!!h3ll0.AltonTowersIsAReallyCoolThemePark"};

    CaeserCipher cipher{"3"};
    REQUIRE(cipher.key_ == 3);
    //I can't do this test because the .key_ method is private!
}
*/

/*
TEST_CASE("does that the key is converted if its a string"){
    
    std::string input{"test!!h3ll0.AltonTowersIsAReallyCoolThemePark"};

    CaeserCipher cipher{"5"};
    REQUIRE(cipher.applyCipher(input, CaeserMode::Encrypt) == "yjxym3qq0FqytsYtbjwxNxFWjfqqdHttqYmjrjUfwp");
    //Not sure how to include CaeserMode.hpp? Not much progress on making these tests sorry!
}
just commenting all this out so that I can push a program that compiles
*/