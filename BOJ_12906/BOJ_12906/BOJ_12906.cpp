#include <iostream>
#include <map>
#include <queue>

using namespace std;

struct Hanoi {
	string stra;
	string strb;
	string strc;
	int cnt;
};
string str[3];
map<string, bool> visited;

bool finish(string stra, string strb, string strc) {
	for (int i = 0; i < stra.length(); i++) {
		if (stra[i] != 'A') return false;
	}

	for (int i = 0; i < strb.length(); i++) {
		if (strb[i] != 'B') return false;
	}

	for (int i = 0; i < strc.length(); i++) {
		if (strc[i] != 'C') return false;
	}

	return true;
}
int bfs() {
	queue<Hanoi> q;
	q.push({ str[0],str[1],str[2],0 });
	string check = str[0] + "/" + str[1] + "/" + str[2];
	visited[check] = true;

	while (!q.empty()) {
		string stra = q.front().stra;
		string strb = q.front().strb;
		string strc = q.front().strc;
		int cnt = q.front().cnt;
		q.pop();

		if (finish(stra, strb, strc)) {
			return cnt;
		}

		if (!stra.empty()) {
			char t = stra[stra.length() - 1]; // 제일 마지막에 있는 문자
			stra.pop_back();

			string check = stra + "/" + strb+t + "/" + strc;
			if (visited[check] == false) {
				visited[check] = true;
				q.push({ stra, strb + t, strc, cnt + 1 }); // A의 제일 위쪽에 있는 것을 B 막대로 전달
			}

			check = stra + "/" + strb + "/" + strc + t;
			if (visited[check] == false) {
				visited[check] = true;
				q.push({ stra,strb,strc + t,cnt + 1 });
			}

			stra += t;
		}

		if (!strb.empty()) {
			char t = strb[strb.length() - 1];
			strb.pop_back();

			string check = stra + t + "/" + strb + "/" + strc;
			if (visited[check] == false) {
				visited[check] = true;
				q.push({ stra + t, strb, strc, cnt + 1 });
			}

			check = stra + "/" + strb + "/" + strc + t;
			if (visited[check] == false) {
				visited[check] = true;
				q.push({ stra, strb, strc + t, cnt + 1 });
			}

			strb += t;
		
		}

		if (!strc.empty()) {
			char t = strc[strc.length() - 1];
			strc.pop_back();

			string check = stra + t + "/" + strb + "/" + strc;
			if (visited[check] == false) {
				q.push({ stra + t,strb,strc,cnt + 1 });
				visited[check] = true;
			}

			check = stra + "/" + strb + t + "/" + strc;
			if (visited[check] == false) {
				q.push({ stra, strb + t, strc, cnt + 1 });
				visited[check] = true;
			}

			strc += t;
		}

	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 3; i++) {
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			char c;
			cin >> c;
			str[i] += c;
		}
	}

	int cnt = bfs();
	
	cout << cnt << '\n';




}