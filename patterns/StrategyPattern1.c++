// --------------------
// StrategyPattern1.c++
// --------------------

// https://en.wikipedia.org/wiki/Strategy_pattern

#include "gtest/gtest.h"

#include "StrategyPattern1.h"

/*
class Movie {
    public:
        static const int Childrens  = 0;
        static const int NewRelease = 1;
        static const int Regular    = 2;

    Childrens
        $2 for the first 3 days
        $2 per day after

    NewRelease
        $3 per day

    Regular
        $2 for the first 2 days
        $2 per day after
*/

using namespace std;

TEST(Strategy_Pattern_Fixture, test_1) {
    Movie x("Lion King", Movie::Childrens, 2);
    ASSERT_EQ(2, x.amount());}

TEST(Strategy_Pattern_Fixture, test_2) {
    Movie x("Finding Nemo", Movie::Childrens, 4);
    ASSERT_EQ(4, x.amount());}

TEST(Strategy_Pattern_Fixture, test_3) {
    Movie x("Jason Bourne", Movie::NewRelease, 2);
    ASSERT_EQ(6, x.amount());}

TEST(Strategy_Pattern_Fixture, test_4) {
    Movie x("Giant", Movie::Regular, 1);
    ASSERT_EQ(2, x.amount());}

TEST(Strategy_Pattern_Fixture, test_5) {
    Movie x("Shane", Movie::Regular, 3);
    ASSERT_EQ(4, x.amount());}
