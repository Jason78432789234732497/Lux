#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ifstream file("/Volumes/1st Storage/OS/usr/name.txt");
	std::string name;
	
	if (file.is_open()) {
		std::getline(file, name);
		file.close();
	} else {
		name = "unknown";
	}

	std::cout << name << std::endl;
	return 0;
}
