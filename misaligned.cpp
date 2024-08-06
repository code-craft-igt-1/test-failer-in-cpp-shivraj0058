#include <assert.h>
#include <iostream>
#include<string>
#include<sstream>

using namespace std;

const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

int PrintColorCodeMap() {
    int i = 0, j = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

void TestPrintColorCodeMap()
{
    std::stringstream colorMapOutput;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(colorMapOutput.rdbuf());

    PrintColorCodeMap();

	std::cout.rdbuf(p_cout_streambuf);

	std::stringstream expectedOutput;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            expectedOutput << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[j] << "\n";
        }
    }

    assert(expectedOutput.str() == colorMapOutput.str());

}

int main() {
    int result = PrintColorCodeMap();
    assert(result == 25);
    TestPrintColorCodeMap();
    std::cout << "All is well (maybe!)\n";

    return 0;
}