/**
 * @file first_non_Reapting.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-09
 * link - https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
 * solution - https://practice.geeksforgeeks.org/viewSol.php?subId=f14e2760efdb63fd74556507c781318e&pid=705333&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		string FirstNonRepeating(string A){
		      queue<int> q;
		    string temp="";
		    int arr[26]={0};
		    for(int i=0;i<A.size();i++){
		        arr[A[i]-'a']++;
		        if(arr[A[i]-'a']==1){
		            q.push(A[i]);
		        }
		        while(!q.empty() && arr[q.front()-'a']!=1){
		            q.pop();
		        }
		        if(q.empty()){
		            A[i]='#';
		        }else{
		            A[i]=q.front();
		        }
		    }
		    return A;
		}

};