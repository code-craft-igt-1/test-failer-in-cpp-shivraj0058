#include <assert.h>
#include <iostream>
#include<string>
#include<sstream>

using std::cout, std::stringstream, std::streambuf, std::string;

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

void TestPrintColorCodeMap() {
    stringstream colorMapOutput;
    streambuf* p_cout_streambuf = std::cout.rdbuf();
    cout.rdbuf(colorMapOutput.rdbuf());

    PrintColorCodeMap();

    cout.rdbuf(p_cout_streambuf);
    stringstream expectedOutput;

    //Color pair number starts from 1
    int pairNumber = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            expectedOutput << pairNumber << " | " << majorColor[i] << " | " << minorColor[j] << "\n";
            pairNumber++;
        }
    }

    assert(expectedOutput.str() == colorMapOutput.str());
}

int main() {
    int result = PrintColorCodeMap();
    assert(result == 25);
    TestPrintColorCodeMap();
    cout << "All is well (maybe!)\n";

    return 0;
}
