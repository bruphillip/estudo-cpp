#include <iostream>


using namespace std;

int main() {
  int numbers[10];

  cout << "Insira 10 números: " << "\n";

  for (int i = 0; i< 10; i++) {
    cin >> numbers[i];
  }
  
  int currentLarge = 0;
  int currentMin = numbers[0];

  for (int i = 0; i< 10; i++) {
    if(numbers[i] > currentLarge) {
      currentLarge = numbers[i];
    }

    if(numbers[i] < currentMin) {
      currentMin = numbers[i];
    }
  }


  cout << "O maior Numero e: " << currentLarge << " \n";
  cout << "O menor Numero e: " << currentMin << " \n";

}