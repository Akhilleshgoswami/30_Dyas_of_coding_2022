
/**
 * @file Ugly_number.cpp
 * @author your name Akhilesh goswami
 * @brief Day 2  - 2nd question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-02-01
 * problme link - https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#
 * 
 * problem statement - 
 * Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. 
 * By convention, 1 is included. Write a program to find Nth Ugly Number.
 *  solution - https://practice.geeksforgeeks.org/viewSol.php?subId=6df674fa0c12428a65d36f2229ab9efe&pid=703093&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

long long int getNthUglyNo(int n)
{
    set<long long int> s;
    s.insert(1);
    n--;
    while (n--)
    {
        auto it = s.begin();
        long long int x = *it;
        s.erase(it);
        s.insert(x * 2);
        s.insert(x * 3);
        s.insert(x * 5);
    }
    return *s.begin();
}

int main()
{

    return 0;
}