// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
#include <msclr/marshal.h>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <chrono>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::string;
using std::swap;
using std::ostream;
using std::istream;
using std::vector;
using std::setw;
using std::left;
using std::internal;
using std::right;
using std::ofstream;
using std::ifstream;
using std::getline;
using std::stringstream;

#endif //PCH_H
