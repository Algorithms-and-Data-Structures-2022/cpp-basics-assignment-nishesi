#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    int diff = left - right;
    return diff*diff;

  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (bit_pos < 0 || mask < 0) {
      return false;
    }
    for (int i = 1; i <= bit_pos; i++) {
        mask = mask / 2;
    }
    return mask % 2 != 0;


  }

  // Task 3
  int max3(int left, int middle, int right) {

    int firstMax = (left > middle) ? left : middle;
    return (firstMax > right) ? firstMax : right;

  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left != nullptr && right != nullptr) {
      int a = *left;
      *left = *right;
      *right = a;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if (arr == nullptr || length <= 0) {
      return 0;

    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }
    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    if (arr == nullptr || length <= 0) {
      return nullptr;
    }

    int* maxPointer = &arr[0];

    for ( int i = 1; i < length; i++) {
      if (*maxPointer < arr[i]) {
        maxPointer = &arr[i];
      }
    }

    return maxPointer;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length <= 0) {
      return nullptr;
    }

    int* arr = new int[length];
    for (int i = 0; i < length; i++) {
      arr[i] = init_value;
    }
    return arr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if (arr_in == nullptr || length <= 0) {
      return nullptr;
    }

    int* cloneArr = new int[length];
    for (int i = 0; i < length; i++) {
      cloneArr[i] = arr_in[i];
    }

    return cloneArr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    } else if ( length <= 0) {
      os << "Invalid argument: length\n";
    } else if (k <= 0) {
      os << "Invalid argument: k\n";
    } else {

      for (int i = 0; i < length; i += k) {
        os << arr[i] << "\t";
      }
    }
  }

}  // namespace assignment
