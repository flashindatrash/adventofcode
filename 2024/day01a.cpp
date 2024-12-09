#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <numeric>

int main(int argc, char* argv[]) {
	if (std::vector<int> left, right; argc < 2);
	else if (std::ifstream input(argv[1]); !input);
	else if ([&input, &left, &right]{
		for (std::string line; std::getline(input, line);) {
			if (std::regex pattern(R"((\d+)\s+(\d+))"); line.empty());
			else if (std::smatch matches; std::regex_match(line, matches, pattern))
				left.push_back(std::stoi(matches[1].str())), right.push_back(std::stoi(matches[2].str()));
		}}(); left.size() != right.size());
	else if (std::sort(left.begin(), left.end()); false);
	else if (std::sort(right.begin(), right.end()); false);
	else if (std::vector<int> sum(left.size()); false);
	else if (std::transform(left.begin(), left.end(), right.begin(), sum.begin(), [](int a, int b) { return std::abs(b-a); }); false);
	else std::cout << std::accumulate(sum.begin(), sum.end(), 0) << std::endl;
	return 0;
}