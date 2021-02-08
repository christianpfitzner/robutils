

#include "gtest/gtest.h"
#include "robutils_types.h"

TEST(ROBUTILS, types) {
    Point2D p1(1,1); 
    Point2D p2(2,1); 
    Point2D p3(3,2); 
    RotMat2D R1; R1 << 1, 0, 
                       0, 1;
    RotMat2D R2; R2 << 0,-1, 
                       1, 0; 


    // test of simple
    EXPECT_EQ (p1 + p2,  p3);

    // test of transpose function
    EXPECT_EQ(p1.transpose().transpose(), p1); 

    EXPECT_EQ(R1*p1, p1); 

    // rotation around 90 degree counterclock wise
    Point2D res(-1, 1); 
    EXPECT_EQ(R2*p1, res); 

}