/*
Date: 09/04/2020
Author: jiachongliu	
Title: 459. Repeated Substring Pattern
Times: 1
*/

class Solution {
public:
	   bool repeatedSubstringPattern(string s) {
	   	   return (s + s).find(s, 1) != s.size();
	   }
};