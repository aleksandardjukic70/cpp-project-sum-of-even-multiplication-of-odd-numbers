#include <iostream>
#include <vector>

int main() {
	//PROGRAM KOJI RACUNA SUMU PARNIH I PROIZVOD NEPARNIH BROJEVA

  std::vector<int> skup = {2, 4, 3, 6, 1, 9};
  int sumaParnihBrojeva = 0;
  int proizvodNeparnihBrojeva = 1;
  
  //live free or die

  for (int i = 0; i < skup.size(); i++) {

    if (skup[i] % 2 == 0) {
      sumaParnihBrojeva = sumaParnihBrojeva + skup[i];
    } else {
      proizvodNeparnihBrojeva = proizvodNeparnihBrojeva * skup[i];
    }

  }

  std::cout << "Suma parnih brojeva je: " << sumaParnihBrojeva << " \n";
  std::cout << "Proizvod neparnih brojeva je: " << proizvodNeparnihBrojeva << "\n";
}