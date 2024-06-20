#include <bits/stdc++.h>

using namespace std;
struct T0{
	size_t a;
	char b;
	int c;

};//16

struct T1{
	int c;
	size_t a;
	char b;
};//24

struct T2{
	char b;
	int c;
	size_t a;
};//16

struct T3{
	char a;
	char b;
	int c;
};//8

struct T4{
	char a;
	int c;
	char b;
};//12

struct T5{
	char a;
	size_t d;
	int c;
	char b;
};//24

int main(){

	cout << sizeof(T0) << endl;
	cout << sizeof(T1) << endl;
	cout << sizeof(T2) << endl;
	cout << sizeof(T3) << endl;
	cout << sizeof(T4) << endl;
	cout << sizeof(T5) << endl;
	return 0;

}
