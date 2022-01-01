/**
 * @file Overlapping rectangles.cpp
 * @author your name Akhilesh goswami
 * @brief 2nd question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-01-01
 * problme link - https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/#
 * problem statement - 
 * Given two rectangles, find if the given two rectangles overlap or not. 
 * A rectangle is denoted by providing the x and y coordinates of two points: the left top corner and the right 
 * bottom corner of the rectangle. Two rectangles sharing a side are considered overlapping. (L1 and R1 
 * are the extreme points of the first rectangle and L2 and R2 are the extreme points of the second rectangle).
 * solution link - https://practice.geeksforgeeks.org/viewSol.php?subId=a7aa3a47d013b3e0f4cbf1c2ffe12428&pid=705474&user=agiri5375
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