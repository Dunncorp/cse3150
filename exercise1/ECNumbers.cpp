#include <iostream>
#include "ECNumbers.h"

using namespace std;


void output_int_array(int nums[], int length) {
  for (int i = 0; i < length; i++) {
    cout << nums[i] << " ";
  }
}

int ECRemoveSpace(int nums[], int length, int val) {

  int i = 0, backwards = length-1;
  int count_elements_to_delete = 0;

  cout << "Array ";
  output_int_array(nums,length);
  cout << " transformed to ";
  
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

  output_int_array(nums,length);  
  cout << " had "
       << count_elements_to_delete
       << " elements swapped" << endl;

  return count_elements_to_delete;
}




