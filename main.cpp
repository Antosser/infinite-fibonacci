#include <iostream>
#include <fstream>

int main() {
	char dec[32768][9866];
	{
		std::ifstream file("decimals2.txt");
		if (!file.good()) {
			std::cout << "Failed to open file.\n";
			exit(-1);
		}
		{
			int i = 0;
			char c;
			while (file.get(c)) {
				dec[int(i / 9866)][i % 9866];
				i++;
			}
		}
	}

	char a[32768];
	char b[32768];
	for (int i = 0; i < 32768; i++) {
		a[i] = 0;
		b[i] = 0;
	}
}