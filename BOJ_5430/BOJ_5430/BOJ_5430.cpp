#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,num;

	cin >> n;
	while(n--) {
		deque<int> dq;
		string s;

		cin >> s;
		cin >> num;
		
		string arr;
		string temp;
		cin >> arr;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] == '[') {
				continue;
			}

			else if ('0' <= arr[i] && arr[i] <= '9') {
				temp += arr[i];
			}
			else if (arr[i] == ',' || arr[i]==']') {
				if (!temp.empty()) {
					dq.push_back(stoi(temp));
					temp.clear();
				}

			}
			
		}
		bool flag = false;
		bool reverseflag = false; // 뒤집어지지 않은 상태 true : 뒤집어짐
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'R') {
				reverseflag = !reverseflag;
			}
			else { // 'D'인데
				if (dq.empty()) {
					flag = true;
					cout << "error" << '\n';
					break;
				}
				else {
					if (reverseflag) {
						dq.pop_back();
					}
					else {
						dq.pop_front();
					}
				}
			}
		}

		if (!flag) {
			cout << '[';
			if (reverseflag) {
				while (!dq.empty()) {
					cout << dq.back();
					dq.pop_back();
					if (!dq.empty()) {
						cout << ',';
					}
				}
			}
			else {
				while (!dq.empty()) {
					cout << dq.front();
					dq.pop_front();
					if (!dq.empty()) {
						cout << ',';
					}
				}
			}
			cout << "]\n";
		}		
	}
	
}