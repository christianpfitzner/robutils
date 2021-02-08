

#include "gtest/gtest.h"
#include "types.h"

TEST(blaTest, test1) {
    Point2D p1(1,2); 
    Point2D p2(2,1); 
    Point2D p3(3,3); 
    EXPECT_EQ (p1 + p2,  p3);
}