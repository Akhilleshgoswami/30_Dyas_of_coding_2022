/**
 * @file countThe_subarray_lessthenKproduct.cpp
 * @author your name Akhilesh goswami
 * @brief 3nd question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-01-01
 * 
 * problme link -https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#
 * 
 * problem statement - 
 *Given an array of positive numbers, the task is to find the number of possible 
 contiguous subarrays having product less than a given number k.
 *
 * 
 * solution link - https://practice.geeksforgeeks.org/viewSol.php?subId=9344c29413cfd165c2cee7fd670f58f7&pid=703804&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */


#include <bits/stdc++.h>
using namespace std;

    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        
         if(L1[0]>R2[0]||L2[0]>R1[0])
           return false;
       if(R1[1]>L2[1]||R2[1]>L1[1])
           return false;
       return true;
    }

int main()
{
    // for input go to the link - solved in 45  minutes 
}