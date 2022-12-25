#include <iostream>

#include "Sorting/_Demo.h"
#include "PatternSearch/_Demo.h"
#include "Hashing/adler32.h"
#include "Hashing/fnv132.h"
#include "Hashing/fnv164.h"
#include "Hashing/sha1.h"
#include "Hashing/sha256.h"
#include "TheoryOfNumbers/Factorial.h"

int main() {
  // testSorting(&sorting::sortBubble, 500, false);
  // testAllSortings(1, 10000, 5000);
  // testSillySortings(1);

  // testSearchFull(5, "aa");
  
  // std::cout << hashing::adler32("hello") << "\n";
  // std::cout << hashing::fnv132("hello") << "\n";
  // std::cout << hashing::fnv164("hello") << "\n";
  // std::cout << hashing::sha1("hello") << "\n";
  // std::cout << hashing::sha256("hello") << "\n";

  std::cout << factorial::iterativeFactorial(22) << "\n";
  std::cout << factorial::recursiveFactorial(22) << "\n";
  
  return 0;
}