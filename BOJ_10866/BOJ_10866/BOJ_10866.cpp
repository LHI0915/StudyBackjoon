#include <deque>
#include <string.h>
#include <iostream>

using namespace std;

int main(void){
	deque<int> de;
	char s[30];
	int testcase;
	cin >> testcase;
	for(int i=0;i<testcase;i++){
		cin >> s;
		if(strcmp(s,"push_front")==0){
			int num;
			cin >> num;
			de.push_front(num);
		}
		else if(strcmp(s,"push_back")==0){
			int num;
			cin >> num;
			de.push_back(num);
		}
		else if(strcmp(s,"pop_front")==0){
			if(!de.empty()){
				cout << de.front() << endl;
				de.pop_front();
			}
			else cout << -1 << endl;
		}
		else if(strcmp(s,"pop_back")==0){
			if(!de.empty()){
				cout << de.back() << endl;
				de.pop_back();
			}
			else cout << -1 << endl;
		}
		else if(strcmp(s,"size")==0){
			cout << de.size() << endl;
		}
		else if(strcmp(s,"empty")==0){
			if(!de.empty()){
				cout << 0 << endl;
			}
			else cout << 1 << endl;
		}
		else if(strcmp(s,"front")==0){
			if(!de.empty()){
				cout << de.front() << endl;
			}
			else cout << -1 << endl;
		}
		else if(strcmp(s,"back")==0){
			if(!de.empty()){
				cout << de.back() << endl;
			}
			else cout << -1 << endl;
		}
	}

}