/**
 * @file Phonecontact.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-09
 * peoblem link -  https://practice.geeksforgeeks.org/problems/phone-directory4628/1/#
 * solution link - https://practice.geeksforgeeks.org/viewSol.php?subId=157fd605f158ef1002c791ae09044f82&pid=705602&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */     
#include <bits/stdc++.h>


using namespace std;
 vector<vector<string>> fn(string contact[],string s,int n){
    set<string>mp;
vector<vector<string>>ans;
       vector<vector<string>>ans(s.size());
       for(int i=0;i<n;i++){
           mp.insert(contact[i]);
       }
       for(int i=0;i<s.size();i++){
           for(auto it:mp){
               if(s.substr(0,i+1)==it.substr(0,i+1)){
                   ans[i].push_back(it);
               }
           }
           if(ans[i].size()==0){
               ans[i].push_back(to_string(0));
           }
       }
       return ans;
   }
