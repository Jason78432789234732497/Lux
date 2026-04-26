#include <iostream>
#include <filesystem>

int main(int argc, char* argv[]) {
	std::string path = ".";

	if (argc > 1)
		path = argv[1];

	try {
		for (const auto& entry : std::filesystem::directory_iterator(path)) {
			std::cout << entry.path().filename().string() << "\n";

		}
	} catch (...) {
		std::cout << "ld: cannot access '" << path << "'\n";
	}

	return 0;
}
