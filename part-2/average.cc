// Nathan Ngo
// ntngo05@csu.fullerton.edu
// @ntngo05
// Partners: @1Boov1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "Error: You must enter at least one number\n";
    return 1;
  }

  double sum{0.0};
  bool first{true};
  for (std::string& arg : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum += std::stod(arg);
  }

  double argsize = argc - 1;
  double average = sum / argsize;

  std::cout << "average = " << average << "\n";

  return 0;
}
