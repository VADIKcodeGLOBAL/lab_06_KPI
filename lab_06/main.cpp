#include "Header.h"

// ─── Main function ───────────────────────────────────────────────────────────

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    int arraySize = readArraySizeFromKeyboard();
    demonstrateSorting(arraySize);
    measureAndPrintTimings();

    return 0;
}