#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
	if (std::vector<std::vector<char>> matrix; argc < 2);
	else if (std::ifstream input(argv[1]); !input);
	else if ([&input, &matrix]{
		for (std::string line; std::getline(input, line);)
			if (auto& row = matrix.emplace_back(); false);
			else for (auto c : line) row.push_back(c);
		}(); false);
	else if (auto count = 0);
	else if ([&matrix, &count]{
		if (const std::string& search = "XMAS"; false);
		else for (size_t y = 0; y < matrix.size(); ++y)
			for (size_t x = 0; x < matrix[y].size(); ++x)
				for (auto d : {std::make_pair(1,0), std::make_pair(-1,0), std::make_pair(0,1), std::make_pair(0,-1), std::make_pair(1,1), std::make_pair(-1,1), std::make_pair(1, -1), std::make_pair(-1, -1)})
					if (d.first != 0 && size_t(d.first > 0 ? matrix[y].size()-x : x+1) < search.size());
					else if (d.second != 0 && size_t(d.second > 0 ? matrix.size()-y : y+1) < search.size());
					else if (std::string result; false);
					else for (size_t i = 0; i < search.size(); ++i)
						if (result != search.substr(0, result.size())) break;
						else if (result.push_back(matrix[y+i*d.second][x+i*d.first]); result == search) ++count;
	}(); false);
	else std::cout << count << std::endl;
	return 0;
}