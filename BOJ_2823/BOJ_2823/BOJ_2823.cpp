#include <iostream>
#include <string>


using namespace std;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };


int main(void) {
	int r, c;
	bool flag = true;
	string road[11];
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		cin >> road[i];
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (road[i][j] == 'X') continue;

			int road_cnt = 0;
			for (int k = 0; k < 4; k++) {
				int nextx = i + dx[k];
				int nexty = j + dy[k];

				if (nextx < 0 || nextx >= r || nexty < 0 || nexty >= c) continue;
				if(road[nextx][nexty]=='.')
					road_cnt++;

			}

			if (road_cnt <= 1) {
				flag = false;
				break;
			}
		}
	}
	if (flag) printf("%d\n", 0);
	else printf("%d\n", 1);
}