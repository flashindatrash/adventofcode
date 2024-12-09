#include <iostream>
#include <fstream>
#include <string>
#include <ranges>
#include <vector>
#include <sstream>
#include <algorithm>

int main(int argc, char* argv[]) {
	if (std::vector<std::vector<int>> reports; argc < 2);
	else if (std::ifstream input(argv[1]); !input);
	else if ([&input, &reports]{
		for (std::string line; std::getline(input, line);) {
			if (std::istringstream iss(line); false);
			else if (std::vector<int> levels((std::istream_iterator<int>(iss)), std::istream_iterator<int>()); false);
			else reports.push_back(levels);
		}}(); reports.empty());
	else std::cout << std::ranges::count_if(reports, [](std::vector<int>& levels) {
		if (auto check = [](int a, int b){ return b - a < 1 || b - a > 3; }; false);
		else return std::ranges::adjacent_find(levels, [check](int a, int b) {
			return check(a, b);
		}) == levels.end() || std::ranges::adjacent_find(levels, [check](int a, int b) {
			return check(b, a);
		}) == levels.end();
	}) << std::endl;
	return 0;
}