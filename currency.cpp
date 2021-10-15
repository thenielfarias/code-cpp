#include <iostream>

int main() {
  double pesos, reais, soles, dollars;
  const double conversion_rate_co = 0.00027;
  const double conversion_rate_br = 0.18;
  const double conversion_rate_pe = 0.25;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  
  dollars = (conversion_rate_co * pesos) + (conversion_rate_br * reais) + (conversion_rate_pe * soles);

  std::cout << "Total USD = $" << dollars << "\n";
}