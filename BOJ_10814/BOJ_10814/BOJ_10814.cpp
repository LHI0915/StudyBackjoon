#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct join{
	int age;
	string name;
}Join;

bool cmp(const Join &u, const Join &v){
	return u.age < v.age;
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int testcase;
	cin >> testcase;
	vector<Join> a(testcase);
	for(int i=0;i<testcase;i++){
		cin >> a[i].age;
		cin >> a[i].name;
	}
	stable_sort(a.begin(),a.end(),cmp);
	for(int i=0;i<testcase;i++){
		cout << a[i].age << ' ' << a[i].name << "\n";
	}
}