
/**
 * @file aRRAY_pair_sum_divisibility.cpp
 * @author your name Akhilesh goswami
 * @brief Day 5  - 1nd question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-02-01
 * problme link - https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1#
 * 
 * problem statement - 
 * Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. 
 * By convention, 1 is included. Write a program to find Nth Ugly Number.
 *  solution - https://practice.geeksforgeeks.org/viewSol.php?subId=b78fd5cd4a0b986fcd59e7448b8dad02&pid=704691&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

 bool canPair(vector<int> arr, int k) {
              unordered_map<int,int> mp;
        
        int n = arr.size();
        if(n % 2 != 0) return false;
        
        for(int i=0;i<n;i++){
            mp[arr[i] % k]++;
        }
        
        for(int i=0;i<n;i++){
            
            int rem1 = arr[i] % k;
            
            if(rem1 == 0){
                if(mp[rem1] % 2 != 0) return false;
            }
            else{
                int rem2 = k - rem1;
                if(rem1 == rem2 and mp[rem1] % 2 != 0) return false;
                if(mp.find(rem2) == mp.end()) return false;
                if(mp[rem1] != mp[rem2]) return false;
            }
            
        }
        return true;
    }
int main()
{

    return 0;
}