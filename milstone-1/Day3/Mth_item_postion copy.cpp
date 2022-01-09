
/**
 * @file Mth_item_postion.cpp
 * @author your name Akhilesh goswami
 * @brief Day 3  - 1st question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-02-01
 * problme link -https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1#
 * 
 * solution link -https://practice.geeksforgeeks.org/viewSol.php?subId=de957b465c814d2bbce0fc7e84993f65&pid=703607&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

 string printMinNumberForPattern(string S){
        // code here 
    stack<int> st;
        string ans ="";
        int num=1;
        for(int i=0;i<S.size();i++){
            char c=S[i];
            if(c=='D'){
                st.push(num++);
                
            }
            else {
                st.push(num++);
                while(!st.empty()){
                    char c1= '0'+st.top();
                    ans.push_back(c1);
                    st.pop();
                    
                }
            }
        }
        st.push(num++);
        while(!st.empty()){
            
            char c1= '0'+st.top();
            ans.push_back(c1);
            st.pop();
                    
                }
        return ans;
        
        
    }

int main(){


    return 0;
}