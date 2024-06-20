#include <bits/stdc++.h>
using namespace std;

struct Cmp{
	bool operator()(int a, int b){
		return a > b;
	}
};

int main(){
	vector<int> arr = {5, 2, 1, 6, 1, 2, 7, 3, 9};
	int n  = arr.size() / 3;
	priority_queue<int> pq1;
	priority_queue<int, vector<int>, Cmp> pq2;
	int left = 0, right = 0;
	for(int i = 0; i < n; i++){
		pq1.push(arr[i]);
		left += arr[i];
	}
	for(int i = n*2; i < n * 3; i++){
		pq2.push(arr[i]);
		right += arr[i];
	}

	int res = left - right;
	cout << left << '\t' << right << '\t' << res << endl;
	vector<int> left_arr(n);
	vector<int> right_arr(n);
	for(int i = n; i < n*2; i++){
		int left_top = pq1.top();
		//cout << left_top << endl;
		if(left_top >= arr[i]){
			pq1.push(arr[i]);
			pq1.pop();
			int left_sub = arr[i] - left_top;
			left += left_sub;
		}
		left_arr[i-n] = left;
	}
	//cout << "==================" << endl;

	for(int i = n*2-1; i >= n; i--){
		int right_top = pq2.top();
		//cout << right_top << endl;
		if(right_top <= arr[i]){
			pq2.push(arr[i]);
			pq2.pop();
			int right_sub = arr[i] - right_top;
			right += right_sub;
		}
		right_arr[i-n] = right;
	}
	//cout << "==================" << endl;
	
	for(int i = 0; i < n; i++){
		res = min(res, left_arr[i]-right_arr[i]);
		cout << left_arr[i] << '\t' << right_arr[i] << '\t' << res << endl;
	}

	cout << "the res is: " << res << endl;

	return 0;
}
