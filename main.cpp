#include <iostream>
// #include <string>
#include <ctime>
#include <unistd.h>
#include "sum.h"


using namespace std;

int main() {
//  int resultado = 10;
  // std::string meunome { "Bruno Philippe" };
  
  // std::cout << "Resultado: " << resultado << "\n";

  // sum(50, 50, &resultado);

  // std::cout << "Resultado: " << resultado << "\n";
  // std::cout << "Meu nome é: " << meunome << "\n";



  // *(std::string*)ptrG = "300";

  // std::cout << "Resultado: " << *(std::string *)ptrG  << "\n";
  // std::cout << "Resultado: " << resultado << "\n";

  std::time_t now = std::time(nullptr) ; 

  cout <<  "\n" << now << "\n";

  std::tm calendar_time = *std::localtime(std::addressof(now)) ;

  cout <<  "\n" << calendar_time.tm_sec << "\n";
  sleep(20);
  cout <<  "\n" << calendar_time.tm_sec << "\n";
  
  return 0;
}