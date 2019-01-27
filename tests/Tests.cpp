//
// Created by paulkokos on 24/1/2019.
//

#include "../lib/library.cpp"
#include "../lib/library.h"

#include <gtest/gtest.h>

Library lib;
TEST(SquareRootTest, PositiveNos) {
        ASSERT_EQ(6, lib.squareRoot(36.0));
        ASSERT_EQ(18.0, lib.squareRoot(324.0));
        ASSERT_EQ(25.4, lib.squareRoot(645.16));
        ASSERT_EQ(0, lib.squareRoot(0.0));
        ASSERT_EQ(6, lib.squareRoot(36.0));
}

TEST(SquareRootTest, NegativeNos) {
        ASSERT_EQ(-1.0, lib.squareRoot(-15.0));
        ASSERT_EQ(-1.0, lib.squareRoot(-0.2));
}
//TEST(helloTest, HelloSTD) {
//    testing::internal::CaptureStdout();
//    ASSERT_EQ("Hello world",lib.hello());
//}
//TEST(OpenFilesTest, OpenTiffFiles) {
//
//}
//TEST(OpenFilesTest, OpenJpegFiles) {
//
//}
//
//TEST(OpenFilesTest, OpenBmpFiles) {
//
//}
//
//TEST(OpenFilesTest, FilesExist) {
//
//}
//
//TEST(OpenFilesTest, FilesFound) {
//
//}
//
//TEST(OpenFilesTest, FilesHaveValidName) {
//
//}
//
//TEST(OpenFilesTest, FilesCorrupted) {
//
//}

//TEST(giatampazaTest, TestName) {
//    ASSERT_EQ("This is a test","This is A test");
//}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}