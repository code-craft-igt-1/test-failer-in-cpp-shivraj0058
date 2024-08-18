#include "tshirtsize.h"

char TShirtSize::getTShirtSizeName(int shoulderSizeIncms) {
    char sizeName = '\0';

    if (shoulderSizeIncms < 38) {
        sizeName = 'S';
    } else if (shoulderSizeIncms >= 38 && shoulderSizeIncms < 42) {
        sizeName = 'M';
    } else if (shoulderSizeIncms >= 42) {
        sizeName = 'L';
    }

    return sizeName;
}
