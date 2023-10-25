// Nathan Ngo
// ntngo05@csu.fullerton.edu
// @ntngo05
// Partners: @1Boov1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    std::cout << "Error: You must supply three arguments\n";
    return 1;
  }

  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};

  std::cout << "Your order: A " << arguments.at(1) << " sandwich on "
            << arguments.at(2) << " with " << arguments.at(3) << "\n";

  return 0;
}
