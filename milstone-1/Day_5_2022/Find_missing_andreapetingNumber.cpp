




/**
 * @file Find_missing_and_repatnig_number.cpp
 * @author your name Akhilesh goswami
 * @brief 1nd question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-01-01
 * 
 * problme link - https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/
 * problem statement - 
 *Given an array of positive numbers, the task is to find the number of possible 
 contiguous subarrays having product less than a given number k.
 *
 * 
 * solution link -https://practice.geeksforgeeks.org/viewSol.php?subId=41b7859a017686a3044e144d7b3725f8&pid=702678&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;

 int *findTwoElement(int *arr, int n) {
        
        int i = 0;
        int *arr1 = new int [2];
        while( i < n){
            
            int cr = arr[i]-1;
            
            if(arr[cr] == arr[i] and i!= cr) arr1[0] = arr[i];
            
            if(arr[cr]!= arr[i]) swap(arr[cr],arr[i]);
            
            else i++;
        }
        for(int i =0;i<n;i++){
            
            if(i+1 != arr[i]){arr1[1] = i+1;
                
                break;
            }
        }
        return arr1;
        
    }
    int main(){
        return 0;
    }