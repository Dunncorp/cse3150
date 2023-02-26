#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "student_functions.h"


struct student student100 = {};
struct student student50 = {};
struct student student0 = {};


TEST_CASE("midterm scores") {
  CHECK(student100.midterm == 100);
  CHECK(student50.midterm == 50);
  CHECK(student0.midterm == 0);
}
TEST_CASE("final scores") {
  CHECK(student100.final == 100);
  CHECK(student50.final == 50);
  CHECK(student0.final == 0);
}
TEST_CASE("homework scores") {
  CHECK(compute_homework_average(student100) == 100);
  CHECK(compute_homework_average(student50) == 50);
  CHECK(compute_homework_average(student0) == 0);
}
TEST_CASE("total scores") {
  CHECK(compute_class_score(student100) == 100);
  CHECK(compute_class_score(student50) == 50);
  CHECK(compute_class_score(student0) == 0);
}

// we are only testing if the final calculation of the average homework score is correct