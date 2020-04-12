#include <iostream>
#include <vector>
#include <map>

int main() {
    std::map<std::string, double> results;
    results.insert(std::pair<std::string, double>("program_test", 1.0));
    results.insert(std::pair<std::string, double>("program_bad", 3.1));
    results.insert(std::pair<std::string, double>("program_good", 2.5));

    std::cout << results["program_bad"] << std::endl;

    std::make_pair("program", 4.0);
}