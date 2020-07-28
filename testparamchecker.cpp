#include "paramchecker.h"
#include <gtest/gtest.h>
#if 0 
TEST(VitalsTest1, Range) {
    ASSERT_EQ(true, IsRangeOk(100, 50, 100));
}
TEST(VitalsTest2, Range) {
    ASSERT_EQ(true, IsRangeOk(50, 50, 100));
}
TEST(VitalsTest3, Range) {
    ASSERT_EQ(true, IsRangeOk(60, 50, 100));
}
TEST(VitalsTest4, Range) {
    ASSERT_EQ(false, IsRangeOk(10, 50, 100));
}
#endif
TEST(VitalsTest, Range) {
    ASSERT_EQ(false, IsRangeOk(120, 50, 100));
    ASSERT_EQ(true, IsRangeOk(100, 50, 100));
    ASSERT_EQ(true, IsRangeOk(50, 50, 100));
    ASSERT_EQ(true, IsRangeOk(60, 50, 100));
    ASSERT_EQ(false, IsRangeOk(10, 50, 100));
}
TEST(VitalsTest, BPM) {
    ASSERT_EQ(true, vitalsAreOk(100, 100, 50));
}
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
