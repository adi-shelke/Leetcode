#include <bits/stdc++.h>
#include <string>
using namespace std;

string replaceSpaces(string &str) {
    string ans = "";
    for (int i = 0; i < str.length(); i++) {
        if(str[i]==' ') 
            ans.append("@40");
		else
        	ans.push_back(str[i]);  // Append the character to the result string
		
    }
    return ans;  // Return the modified string
}
