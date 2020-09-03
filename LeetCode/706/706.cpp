/*
Date: 09/03/2020
Author: jiachongliu
Title: 706. Design HashMap
Times: 1
*/

class Solution {
private:
	   vector<int> data;

public:
	   MyHashMap() {
	   	   data.resize(1000000, -1);
	   }

	   void put(int key, int value) {
	   	   data[key] = value;
	   }

	   int get(int key) {
	   	   return data[key];
	   }

	   void remove(int key) {
	   	   data[key] = -1;
	   }

}