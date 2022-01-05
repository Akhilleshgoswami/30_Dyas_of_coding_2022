

/**
 * @file aRRAY_pair_sum_divisibility.cpp
 * @author your name Akhilesh goswami
 * @brief Day 5  - 2nd question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-02-01
 * problme link - https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1
 * 
 * problem statement - 
 * Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. 
 * By convention, 1 is included. Write a program to find Nth Ugly Number.
 *  solution - https://practice.geeksforgeeks.org/viewSol.php?subId=de957b465c814d2bbce0fc7e84993f65&pid=703607&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

string printMinNumberForPattern(string S)
{
    // code here
    stack<int> st;
    string ans = "";
    int num = 1;
    for (int i = 0; i < S.size(); i++)
    {
        char c = S[i];
        if (c == 'D')
        {
            st.push(num++);
        }
        else
        {
            st.push(num++);
            while (!st.empty())
            {
                char c1 = '0' + st.top();
                ans.push_back(c1);
                st.pop();
            }
        }
    }
    st.push(num++);
    while (!st.empty())
    {

        char c1 = '0' + st.top();
        ans.push_back(c1);
        st.pop();
    }
    return ans;
}
int main()
{
    return 0;
}