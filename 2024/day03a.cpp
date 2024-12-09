#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <numeric>

int main(int argc, char* argv[]) {
	if (std::vector<int> mul; argc < 2);
	else if (std::ifstream file(argv[1]); !file);
	else if (std::string input((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>()); input.empty());
	else if ([&input, &mul]{
		if (std::regex pattern(R"(mul\((\d{1,3}),(\d{1,3})\))"); false);
		else for (std::sregex_iterator it(input.begin(), input.end(), pattern), end; it != end; ++it)
			mul.push_back(std::stoi((*it)[1]) * std::stoi((*it)[2]));
	}(); mul.empty());
	else std::cout << std::accumulate(mul.begin(), mul.end(), 0) << std::endl;
	return 0;
}