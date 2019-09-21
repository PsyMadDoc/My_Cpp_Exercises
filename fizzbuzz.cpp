# include <iostream>

int main() {
  
  // Count 1..100
  for (int i = 1; i <= 100; i++) {
    
    // check if i divides by 3 or 5 or 3*5 with no remainder
    if (i % 15 == 0) {
      std::cout << "FizzBuzz\n";
    }
    else if (i % 3 == 0) {
      std::cout << "Fizz\n";
    }
    else if (i % 5 == 0) {
      std::cout << "Buzz\n";
    }
    else {
      std::cout << i << "\n";
    }
    
  } // end for
  
return 0;
} // end main();
