
/**
 * @file Mth_item_postion.cpp
 * @author your name Akhilesh goswami
 * @brief Day 3  - 1st question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-02-01
 * problme link -https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1#
 * 
 * problem statement - 
 * Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
 * eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
 * You are required to complete the function encode that takes only one argument the string which is to be encoded and returns the encoded string.

 * solution link -https://practice.geeksforgeeks.org/viewSol.php?subId=90939fab69b24b7df511c198bff98931&pid=704216&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int findPosition(int N , int M , int K) {
       if(N==1)
       {
           return 1;
       }
       
       int ans = M%N+K-1;
       if(ans==N)
       {
           return ans;
       }
       
       return ans%N;

    }
   
int main(){


    return 0;
}