#include <iostream>

int main() {
  double pesos, reias, soles, dollars, conv1, conv2, conv3;
  
  std::cout << "Enter number of Colombian Pesos:";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais:";
  std::cin >> reias;
  std::cout << "Enter number of Peruvian Soles:";
  std::cin >> soles;

  /*
  Conversion rates
  1 pesos == $0.051471
  1 reias == $0.24324
  1 soles == $0.29832
  */
  conv1 = 0.051471 * pesos;
  conv2 = 0.24324 * reias;
  conv3 = 0.29832 * soles;
    
  // Total USD
  dollars = conv1 + conv2 + conv3;
  
  
  std::cout << "Pesos to USD: $" << conv1 << "\n";
  std::cout << "Reias to USD: $" << conv2 << "\n";
  std::cout << "Soles to USD: $" << conv3 << "\n";
  std::cout << "Total USD = $" << dollars << "\n";
  
  return 0;
}
