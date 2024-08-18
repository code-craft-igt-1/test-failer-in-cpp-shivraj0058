#include <assert.h>
#include <iostream>

char getTShirtSizeName(int sizeIncms) {
    char sizeName = '\0';

    if (sizeIncms < 38) {
        sizeName = 'S';
    } else if (sizeIncms >= 38 && sizeIncms < 42) {
        sizeName = 'M';
    } else if (sizeIncms >= 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {
    assert(getTShirtSizeName(37) == 'S');
    assert(getTShirtSizeName(38) == 'M');
    assert(getTShirtSizeName(40) == 'M');
    assert(getTShirtSizeName(42) == 'L');
    assert(getTShirtSizeName(43) == 'L');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
