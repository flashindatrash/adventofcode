#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <numeric>

int main(int argc, char* argv[]) {
	if (std::vector<std::pair<int,int>> rules; argc < 2);
	else if (std::vector<std::vector<int>> updates; false);
	else if (std::ifstream input(argv[1]); !input);
	else if ([&input, &rules, &updates]{
		for (std::string line; std::getline(input, line);) {
			if (std::istringstream stream(line); line.find(',') != std::string::npos)
				if (auto& row = updates.emplace_back(); false);
				else for (std::string number; std::getline(stream, number, ',');) row.push_back(std::stoi(number));
			else if (std::regex pattern(R"((\d+)\|(\d+))"); false);
			else if (std::smatch matches; std::regex_match(line, matches, pattern))
				rules.push_back({std::stoi(matches[1].str()), std::stoi(matches[2].str())});
		}}(); false);
	else if (struct Result{ inline ~Result() { std::cout << i << std::endl; }; int i = 0; } result; false);
	else for (auto& line : updates)
		if (std::vector<int> copy = line; false);
		else if (std::sort(copy.begin(), copy.end(), [&rules](int a, int b) {
			for (auto& rule : rules)
				if (a == rule.first && b == rule.second) return true;
				else if (a == rule.second && b == rule.first) return false;
			return true;
		}); line == copy) result.i += copy[int(copy.size()/2)];
	return 0;
}