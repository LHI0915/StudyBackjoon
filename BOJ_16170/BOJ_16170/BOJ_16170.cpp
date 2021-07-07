#include <cstdio>
#include <ctime>

using namespace std;

int main(void) {
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);

	printf("%d\n%02d\n%02d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
}