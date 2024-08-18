#include <assert.h>
#include <iostream>
#include "src/tshirtsize.h"

int main() {
    assert(TShirtSize::getTShirtSizeName(37) == 'S');
    assert(TShirtSize::getTShirtSizeName(38) == 'M');
    assert(TShirtSize::getTShirtSizeName(40) == 'M');
    assert(TShirtSize::getTShirtSizeName(42) == 'L');
    assert(TShirtSize::getTShirtSizeName(43) == 'L');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
