/**
 * @file nutsanbolt.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-09
 * link - https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1
 * solve - https://practice.geeksforgeeks.org/viewSol.php?subId=284d8112f9af9e1640bbc93f14be9163&pid=703024&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	     // code here
char arr[9]={'0','0','0','0','0','0','0','0','0'} ;
    for(int i=0;i<n;i++){
        if(nuts[i]=='!')arr[0]='!';
        else if(nuts[i]=='#')arr[1]='#';
         else if(nuts[i]=='$')arr[2]='$';
          else  if(nuts[i]=='%')arr[3]='%';
            else if(nuts[i]=='&')arr[4]='&';
             else if(nuts[i]=='*')arr[5]='*';
              else if(nuts[i]=='@')arr[6]='@';
               else if(nuts[i]=='^')arr[7]='^';
               else arr[8]='~';
    }
    int count=0;
    for(int i=0;i<9;i++){
        if(arr[i]!='0'){
            nuts[count]=arr[i];
            bolts[count]=arr[i];
            count++;
        }      
    }
  }
	

};