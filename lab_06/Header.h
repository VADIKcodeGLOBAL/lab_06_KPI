#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <vector>
#include <string>
#include <cmath>

#pragma once

using namespace std;
using namespace std::chrono;

// Константы
const int RANDOM_MIN = 0;
const int RANDOM_MAX = 50;
const int ELEMENTS_PER_LINE = 20;
const int TIMING_REPEATS = 10;

// Объявления функций (прототипы)
void demonstrateSorting(int arraySize);
void measureAndPrintTimings();
int readArraySizeFromKeyboard();
// ... добавь сюда остальные функции, которые ты вызываешь в main