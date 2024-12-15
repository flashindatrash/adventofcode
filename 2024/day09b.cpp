#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(int argc, char* argv[]) {
	if (struct Result{
		inline ~Result() { std::cout << "result " << sum << " for " << std::chrono::duration<double, std::milli>(std::chrono::high_resolution_clock::now() - start).count() << "ms" << std::endl; };
		std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
		uint64_t sum = {};
		std::vector<std::optional<int>> v;
	} result; argc < 2);
	else if (std::ifstream file(argv[1]); !file);
	else if (std::string content{std::istreambuf_iterator<char>(file.rdbuf()), std::istreambuf_iterator<char>()}; content.empty());
	else if ([&content, &v = result.v]{
		for (size_t c = 0, id = 0; c < content.length(); ++c)
			if (bool even = c%2; id = even ? ++id : id, false);
			else for (int i = 0; i < content[c] - '0'; ++i)
				if (auto& e = v.emplace_back(); !even)
					e.emplace(id);
	}(); false);
	else if ([&v = result.v]{
		for (auto it = std::prev(v.end()); it >= v.begin(); --it) {
			if (auto end = it; !it->has_value());
			else if (it = std::find_if(v.begin(), std::next(it), [value = *it](const std::optional<int>& v) { return v.has_value() && *v == value; }); false);
			else for (auto space = v.begin(); space < it - std::distance(it, end); ++space) {
				if (!std::all_of(space, space + std::distance(it, end) + 1, [](std::optional<int>& v) { return !v.has_value(); }));
				else if (std::swap_ranges(it, std::next(end), space); true) break;
			}
		}
	}(); false);
	else for (size_t i = 0; i < result.v.size(); ++i)
		result.sum += i * result.v[i].value_or(0);
	return 0;
}