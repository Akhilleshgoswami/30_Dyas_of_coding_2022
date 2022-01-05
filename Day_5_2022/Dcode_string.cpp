/**
 * @file Dcode_string.cpp
 * @author Akhilesh
 * @brief 
 * @version 0.1
 * @date 2022-01-05
 * question link - https://practice.geeksforgeeks.org/problems/decode-the-string2444/1
 * solution link - https://practice.geeksforgeeks.org/viewSol.php?subId=45f888ca0532291c35466ab7987340f5&pid=705287&user=agiri5375
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
string decodedString(string s){
        // code here
        string num = "";
        string ans="";
        int n;
        string temp="";
        string temp2="";
        stack<char> st;
        int p = 0;
        
        while(p<s.size())
        {    if(s[p]==']')
             {  while(st.top() != '[')
                {
                    temp=st.top()+temp;
                    st.pop();
                }
                 st.pop();
              while(isdigit(st.top()))
                {    num=st.top()+num;
                     st.pop();
                     if(st.empty()){
                         break;
                     }
                }
                n=stoi(num);
                for(int i=1;i<=n;i++)
                {   temp2=temp2+temp;
                }
                if(st.empty())
                {   ans=temp2;
                    break;
                }
                for(int i=0;i<temp2.size();i++)
                {    st.push(temp2[i]);
                }
                
                temp="";
                temp2="";
                num="";
            }
            else
            {    st.push(s[p]);
            }
            p++;
        }
        return ans;
    }
    int main(){
        return 0;
    }