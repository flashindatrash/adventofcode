#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>

int main(int argc, char* argv[]) {
	if (struct Result{
		inline ~Result() {
			int i = {};
			for (auto y : matrix) {
				for (auto x : y) if (std::cout << x; x == 'X') ++i;
				std::cout << std::endl;
			}
			std::cout << i << std::endl;
		};
		std::vector<std::vector<char>> matrix;
		std::pair<int,int> pos, dir = {-1,0};
	} result; false);
	else if (std::ifstream input(argv[1]); !input);
	else if ([&input, &result]{
		for (std::string line; std::getline(input, line);)
			if (auto& row = result.matrix.emplace_back(); false);
			else for (auto c : line)
				if (row.push_back(c); c == '^') result.pos = std::make_pair(result.matrix.size() - 1, row.size() - 1);
	}(); false);
	else while(true)
		if (result.matrix[result.pos.first][result.pos.second] = 'X'; result.pos.first == 0 || result.pos.second == 0 || result.pos.first == result.matrix.size() - 1 || result.pos.second == result.matrix[0].size() - 1) break;
		else if (result.matrix[result.pos.first+result.dir.first][result.pos.second+result.dir.second]=='#') {
			if (result.dir == std::pair{-1, 0}) result.dir = {0, 1};
			else if (result.dir == std::pair{0, 1}) result.dir = {1, 0};
			else if (result.dir == std::pair{1, 0}) result.dir = {0, -1};
			else if (result.dir == std::pair{0, -1}) result.dir = {-1, 0};
		} else if (result.pos.first += result.dir.first, result.pos.second += result.dir.second, false);
	return 0;
}