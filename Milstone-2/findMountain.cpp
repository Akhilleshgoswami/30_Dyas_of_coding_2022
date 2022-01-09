/**
 * @file findMountain.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-09
 * Q.link - https://leetcode.com/problems/longest-mountain-in-array/solution/
 * solution link - https://leetcode.com/submissions/detail/616006968/
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;

 int longestMountain(vector<int>& arr) {
        
        int ans = 0;
       
        // find the peak point and then find both site valy and that is your answer 

        int n = arr.size();
        for(int i =1;i<=n-2;){
            if(arr[i] > arr[i-1] and arr[i]>arr[i+1]){

            
            
            int  j = i;
                int count  = 1;
                while(j > 0 and arr[j] > arr[j-1]){
                    j--;
                    count++;
                    
                }
                j =i;
                while(i <n-1 and arr[i] > arr[i+1]){
                    i++;
                    count++;
                    
                }
                
               ans = max(ans,count);
                
            }
            else {
          i++;}
        }
        return ans;
    }