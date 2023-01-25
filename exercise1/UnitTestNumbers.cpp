#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
/*
  https://hackingcpp.com/cpp/tools/testing_frameworks.html
 */

#include "doctest.h"
#include "ECNumbers.h"

int nums[] = {2,3,3,2};
int nums_1[] = {97,95,98,99,95,2};
int nums_2[] = {2,97,95,98,99,95};
int nums_3[] = {2,3,3,3};
int nums_4[] = {2};
int nums_5[] = {2,2};
int nums_6[] = {2,2,2};

TEST_CASE("Testing ECRemoveSpace function") {
  CHECK(ECRemoveSpace(nums,sizeof(nums)/sizeof(nums[0]),2) == 2);
  CHECK(ECRemoveSpace(nums_1,sizeof(nums_1)/sizeof(nums_1[0]),2) == 0);
  CHECK(ECRemoveSpace(nums_2,sizeof(nums_2)/sizeof(nums_2[0]),2) == 1);
  CHECK(ECRemoveSpace(nums_3,sizeof(nums_3)/sizeof(nums_3[0]),2) == 1);
  CHECK(ECRemoveSpace(nums_4,sizeof(nums_4)/sizeof(nums_4[0]),2) == 0);
  CHECK(ECRemoveSpace(nums_5,sizeof(nums_5)/sizeof(nums_5[0]),2) == 1);
  CHECK(ECRemoveSpace(nums_6,sizeof(nums_6)/sizeof(nums_6[0]),2) == 2);      
}


