#include <bits/stdc++.h>
using namespace std;


int main(){
	//unordered_map<int, int> dict;
	//vector<vector<int>> arrs = {{1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7}, {4,5,6,7,8}};
	vector<vector<int>> arrs = {{1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7}};
	int n = arrs.size();
	//1,2,3,4,5
	//  2,3,4,5,6
	//    3,4,5,6,7

	vector<int> sizes;
	for(int i = 0; i < n; i++){
		sizes.push_back(arrs[i].size());
	}

	vector<int> idx(n, 0);

	auto get_intersection = [&](vector<vector<int>> arrs)-> int{
		int res = 0;
		int min_num = arrs[0][0];
		int pre_min = min_num;
		while(1){
			for(int i = 0; i < n; i++){
				while(idx[i] < sizes[i] && arrs[i][idx[i]] < min_num){
					idx[i]++;
				}
				if(arrs[i][idx[i]] > min_num){
					min_num = arrs[i][idx[i]];
				}
				if(idx[i] >= sizes[i]){
					return res;
				}
			}
			
			if(pre_min == min_num){
				res++;
				idx[0]++;
				min_num = arrs[0][idx[0]];
			}
			pre_min = min_num;
			cout << min_num << '\t' << res << endl;
			//break;
		}
		return res;
	};

	int res = get_intersection(arrs);
	cout << "the result is: " << res << endl;

}
