/*
Date: 08/20/2020
Author: jiachongliu
Title: 1333.Filter Restaurants by Vegan-Friendly, Price and Distance
Times: 1
*/


class Solution {
public:
	   vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganfriendly, 
	   	int maxPrice, int maxDistance) {
	   	   vector<pair<int, int>>  filter_result;
	   	   vector<int> result;

	   	   for (vector<int> restaurant : restaurants) {
	   	   	   if ((!veganfriendly || (veganfriendly && restaurant[2]))&&
	   	   	   	   restaurant[3] <= maxPrice &&
	   	   	   	   restaurant[4] <= maxDistance) {
	   	   	   	   filter_result.push_back(make_pair(restaurant[0], restaurant[1]));
	   	   	   }
	   	   }

	   	   sort(filter_result.begin(), filter_result.end(), cmp);

	   	   for (pair<int, int> p : filter_result) {
	   	   	   result.push_back(p.first);
	   	   }

	   	   return result;
	   }

	   static bool cmp(pair<int, int>& p1, pair<int, int>& p2) {
	   	   return p1.second > p2.seond || ((p1.second == p2.second) && p1.first > p2.first);
	   }
};
