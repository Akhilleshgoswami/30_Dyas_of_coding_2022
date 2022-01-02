/**
 * @file stringAnagrams.cpp
 * @author your name akhilesh goswami
 * @brief  - the frist question from the  6 companies sheet @RevisewithArsh 
 * @version 0.1
 * @date 2022-01-01
 * 
 * @copyright Copyright (c) 2022
 * problem link - https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#
 * problem statement - Given an array of strings, return all groups of strings that are anagrams.
 * The groups must be created in order of
 * their appearance in the original array. Look at the sample case for clarification.
 *  solution link - https://practice.geeksforgeeks.org/viewSol.php?subId=3758ee51200e9e54a217da2f29e45251&pid=701966&user=agiri5375
 */
#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> Anagrams(vector<string> &string_list)
{

    vector<string> hp;

    for (int i = 0; i < string_list.size(); i++)
    {

        string str = string_list[i];
        sort(str.begin(), str.end());
        hp.push_back(str);
    }

    vector<vector<string>> ans;

    for (int i = 0; i < hp.size(); i++)
    {
        int flag = 0;
        vector<string> l;
        l.push_back(string_list[i]);

        for (int j = i + 1; j < hp.size(); j++)
        {

            if (hp[i] == hp[j] and hp[i] != "1")
            {
                flag = 1;
                hp[j] = "1";
                l.push_back(string_list[j]);
            }
        }
        if (hp[i] != "1")
            ans.push_back(l);
    }

    return ans;
}

int main()
{
    // for input go to the link - solved in 45  minutes 
}