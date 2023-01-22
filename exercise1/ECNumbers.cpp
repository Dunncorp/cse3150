#include <iostream>
#include "ECNumbers.h"

using namespace std;


void output_int_array(int nums[], int length) {
  for (int i = 0; i < length; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

void outout_int_array_as_Char(int nums[], int length, int number_to_delete) {
 for (int i = 0; i < length; i++) {
    cout << (char) nums[i] << " ";
  }
  cout << endl;
}

int ECRemoveSpace(int nums[], int length, int val) {

  int i = 0, backwards = length-1;
  int count_elements_to_delete = 0;
  while( i < backwards ) {
    if ( nums[i] == val ) {
      int temp = nums[backwards];
      nums[backwards] = nums[i];
      nums[i] = temp;
      backwards--;
      count_elements_to_delete++;
    } else {
      i++;
    }
  }

  cout << count_elements_to_delete
       << " elements swapped " << endl;

  output_int_array(nums,length);
  return count_elements_to_delete;
}




