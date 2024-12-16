#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
#include <deque>
#include <set>

int main(int argc, char* argv[]) {
	if (struct Result{
		inline ~Result() { std::cout << "result " << sum << " for " << std::chrono::duration<double, std::milli>(std::chrono::high_resolution_clock::now() - start).count() << "ms" << std::endl; };
		std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
		int sum = {};
		std::vector<std::vector<int>> v;
		using point = std::pair<int,int>;
		std::vector<point> z;
	} result; argc < 2);
	else if (std::ifstream file(argv[1]); !file);
	else if ([&file, &v = result.v, &z = result.z]{
		for (std::string line; std::getline(file, line);)
			if (auto& l = v.emplace_back(); false);
			else for (auto& c : line)
				if (int i = c - '0'; l.push_back(i), i == 0) z.push_back(std::make_pair(v.size() - 1, l.size()-1));
	}(); result.v.empty());
	else for (auto& z : result.z)
		if (std::deque<Result::point> pool = {z}; false);
		else while (not pool.empty())
			if (auto pt = std::move(pool.front()); pool.pop_front(), false);
			else for (auto& dir : std::vector<Result::point>{{0,1},{1,0},{-1,0},{0,-1}})
				if (Result::point n{pt.first+dir.first,pt.second+dir.second}; n.first<0 || n.second<0 || n.first >= (int)result.v.size() || n.second >= (int)result.v[n.first].size());
				else if (auto d = result.v[n.first][n.second]; d != result.v[pt.first][pt.second] + 1);
				else if (d == 9) ++result.sum;
				else pool.push_back(n);
	return 0;
}