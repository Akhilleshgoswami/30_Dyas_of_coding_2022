

/**
 * @file Total_decoding_string..cpp
 * @author your name Akhilesh goswami
 * @brief Day 3  - 2st question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-02-01
 * problme link -https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/#

 * solution link -https://practice.geeksforgeeks.org/viewSol.php?subId=e791826a96d7f15472703ec6393a2ec3&pid=705327&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */








#include<bits/stdc++.h>
using namespace std;
int CountWays(string s){
		    if(s.size()<1) return 0;
            if(s[0]=='0') return 0;
            if(s.size()==1) return 1;
            int l1=1;
            int l2=1; int mod = 1e9 + 7;
            for(int i=1;i<s.size();i++){
                int d1=s[i]-'0';
                int d2=(s[i-1]-'0')*10+d1;
                int val=0;
                if(d1>=1) val=(val+l2)%mod;
                if(d2>9 && d2<=26) val=(val+l1)%mod;
                l1=l2;
                l2=val;
            }
            return l2%mod;
}
int main(){


    return 0;
}
		