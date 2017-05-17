#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "pulentclass.h"

TEST_CASE( "Pulentclass can be used", "[PulentClass]" ) {

    PulentClass pc(12);

    REQUIRE( pc.getValue() == 12 );

    SECTION( "add one must add one" ) {
        REQUIRE( pc.addOne() == 13 );
    }

    SECTION( "add two must add two" ) {
        REQUIRE( pc.addTwo() == 14 );
    }
}
