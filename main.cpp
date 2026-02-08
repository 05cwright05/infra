/*
 * Author: Caden Wright
 * this file will explore the recreation of the standard vector and a comparison in performance
 * first i will restrict to only ints and see if specificity can beat the real deal
*/
#include <iostream>
#include <vector>
#include "IntVector.h"

int main() {
  int elements[] = {1,2,3};
  IntVector a = {};
  for (int i = 5; i <= 100; i++) {
    a.push_back(i);
  }
  for (int i = 0; i < a.size(); i++) {
    std::cout << a.get(i) << '\n';
  }
}