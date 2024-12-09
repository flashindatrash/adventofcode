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
		if (auto check = [](std::vector<int> levels) {
			return std::ranges::adjacent_find(levels, [](int a, int b) {
				return b - a < 1 || b - a > 3;
			}) == levels.end() || std::ranges::adjacent_find(levels, [](int a, int b) {
				return a - b < 1 || a - b > 3;
			}) == levels.end();
		}; check(levels)) return true;
		else for (size_t i = 0; i < levels.size(); ++i) {
			if (auto copy = levels; false);
			else if (copy.erase(copy.begin() + i); check(copy)) return true;
		} return false;
	}) << std::endl;
	return 0;
}