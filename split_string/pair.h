#pragma once

#include <iostream>

using namespace std;

/**
 * @brief store data in pairs
 *
 */
struct Pair {
    // TODO finish this struct
    char char1;
    char char2;
};

/**
 * @brief split string into pairs
 *
 * @param s string to be splitted
 * @param length length of pairs
 * @return Pair* a pointer who points to the splitted pairs
 */
Pair* splitPair(string s, int& length);

/**
 * @brief print pair
 *
 * @param pair a pair pointer
 */
void printPair(Pair* pair);