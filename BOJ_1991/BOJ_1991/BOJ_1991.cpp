#include <cstdio>

using namespace std;

char tree[27][2];

void postOrder(char root) {
	if (root == '.') return;
	postOrder(tree[root][0]);
	postOrder(tree[root][1]);
	printf("%c", root);
}

void preOrder(char root) {
	if (root == '.') return;
	printf("%c", root);
	preOrder(tree[root][0]);
	preOrder(tree[root][1]);

}

void inOrder(char root) {
	if (root == '.') return;
	inOrder(tree[root][0]);
	printf("%c", root);
	inOrder(tree[root][1]);
}
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char root, left, right;
		scanf("%c %c %c", &root, &left, &right);
		tree[root][0] = left;
		tree[root][1] = right;
	}




}