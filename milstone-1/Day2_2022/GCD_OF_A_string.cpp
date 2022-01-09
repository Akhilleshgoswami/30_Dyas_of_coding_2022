
/**
 * @file Ugly_number.cpp
 * @author your name Akhilesh goswami
 * @brief Day 2  - 3rd question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-02-01
 * problme link - https://leetcode.com/problems/greatest-common-divisor-of-strings/
 * 
 * problem statement - 
 * For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).
 * Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.
 *  solution - https://leetcode.com/submissions/detail/452294851/
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1) return "";
        return str1.substr(0,gcd(str1.length(),str2.length()));
    }

int main()
{

    return 0;
}