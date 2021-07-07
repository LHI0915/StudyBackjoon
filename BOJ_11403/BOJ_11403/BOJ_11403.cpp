#include <cstdio>

using namespace std;

int graph[102][102];
int n;
void floyd() {
	for (int k = 1; k <= n; k++) {
		//k : ���İ��� ����
		for (int i = 1; i <= n; i++) {
			// i : �������
			for (int j = 1; j <= n; j++) {
				// j : �������� 
				if (graph[i][k] && graph[k][j]) {
					graph[i][j] = 1;
				}
			}
		}
	}
}


int main(void) {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &graph[i][j]);
		}
	}

	floyd();

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}

}