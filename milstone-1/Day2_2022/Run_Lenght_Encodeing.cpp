
/**
 * @file Run_lenght_Encodeing.cpp
 * @author your name Akhilesh goswami
 * @brief Day 2  - 1st question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-02-01
 * problme link -https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#
 * 
 * problem statement - 
 * Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
 * eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
 * You are required to complete the function encode that takes only one argument the string which is to be encoded and returns the encoded string.

 * solution link -https://practice.geeksforgeeks.org/viewSol.php?subId=55fe77f3c38a768ef2d5c385db3c6262&pid=700243&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

string encode(string src)
{     

int size = src.size();
  string s;

for(int i =0;i<size;i++){
    
    int j = i+1;
    int count = 1 ;
    while(j < size and src[i] == src[j]){
        src[j] = '1';
        count++;
        j++;
    }
    if(src[i]!='1'){
    s+=src[i];
    s+= to_string(count); 
    }

  
}

  return s;
}     
int main(){


    return 0;
}