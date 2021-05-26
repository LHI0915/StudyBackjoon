#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef struct grade{
	string name;
	int kor;
	int eng;
	int math;
}Grade;

bool cmp(const Grade &u, const Grade &v){
	if(u.kor > v.kor){
		return true;
	}
	else if(u.kor==v.kor){
		if(u.eng < v.eng)
			return true;
		else if(u.eng==v.eng){
			if(u.math > v.math)
				return true;
			else if(u.math==v.math)
				return u.name < v.name;
		}
	}
	return false;
}
int main(void){
	int testcase;
	cin >> testcase;
	vector<Grade> a(testcase);
	for(int i=0;i<testcase;i++){
		cin >> a[i].name >> a[i].kor >> a[i].eng >> a[i].math;
	}
	sort(a.begin(),a.end(),cmp);
	for(int i=0;i<testcase; i++){
		cout << a[i].name << "\n";
	}
}