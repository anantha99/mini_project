#include "unity.h"

void setUp(void){

}

void tearDown(void){

}

void test_addition(){
    TEST_ASSERT_EQUAL(5, addition(2,3));
    TEST_ASSERT_EQUAL(23, addition(20,3));
    TEST_ASSERT_EQUAL(-6, addition(-1,-5));
    TEST_ASSERT_EQUAL(0, addition(0,0));
}
void test_subtraction(){
    TEST_ASSERT_EQUAL(1, subtraction(3,2));
    TEST_ASSERT_EQUAL(17, subtraction(20,3));
    TEST_ASSERT_EQUAL(-2, subtraction(3,5));
    TEST_ASSERT_EQUAL(0, subtraction(20,20));
}
void test_multiplication(){
    TEST_ASSERT_EQUAL(6, multiplication(3,2));
    TEST_ASSERT_EQUAL(60, multiplication(20,3));
    TEST_ASSERT_EQUAL(-3, multiplication(-1,3));
    TEST_ASSERT_EQUAL(3, multiplication(-1,-3));

}
void test_division(){
    TEST_ASSERT_EQUAL(2, division(4,2));
    TEST_ASSERT_EQUAL(10, division(20,2));
    TEST_ASSERT_EQUAL(-2, division(-4,2));
    TEST_ASSERT_EQUAL(2, division(-40,-20));
}

int main(void) {
    UnityBegin(NULL);
    RUN_TEST(test_addition);
    RUN_TEST(test_subtraction);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_division);
    return (UnityEnd());
}