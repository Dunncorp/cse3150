#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
/*
  https://hackingcpp.com/cpp/tools/testing_frameworks.html
 */

#include "doctest.h"
#include "ECNumbers.h"

int nums[] = {2,3,3,2};
int nums_1[] = {97,95,98,99,95,2};
int nums_2[] = {2,97,95,98,99,95};
int nums_3[] = {};
int nums_4[] = {2,2,2,2};

TEST_CASE("Testing ECRemoveSpace function") {
  CHECK(ECRemoveSpace(nums,sizeof(nums)/sizeof(nums[0]),2) == 2);
  CHECK(ECRemoveSpace(nums_1,sizeof(nums_1)/sizeof(nums_1[0]),2) == 0);
  CHECK(ECRemoveSpace(nums_2,sizeof(nums_2)/sizeof(nums_2[0]),2) == 1);
}


