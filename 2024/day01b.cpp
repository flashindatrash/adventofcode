#include <iostream>
#include <fstream>
#include <string>
#include <ranges>
#include <vector>
#include <sstream>
#include <regex>
#include <numeric>
#include <map>

int main(int argc, char* argv[]) {
	if (std::vector<int> left; argc < 2);
	else if (std::map<int,int> right; false);
	else if (std::ifstream input(argv[1]); !input);
	else if ([&input, &left, &right]{
		for (std::string line; std::getline(input, line);) {
			if (std::regex pattern(R"((\d+)\s+(\d+))"); line.empty());
			else if (std::smatch matches; std::regex_match(line, matches, pattern))
				left.push_back(std::stoi(matches[1].str())), ++right[std::stoi(matches[2].str())];
		}}(); left.empty());
	else std::cout << std::accumulate(left.begin(), left.end(), 0, [&right](int a, int b) {
		return a + b * right[b];
	}) << std::endl;
	return 0;
}