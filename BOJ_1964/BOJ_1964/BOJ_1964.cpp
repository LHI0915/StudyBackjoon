#include <iostream>

using namespace std;
int main()
{
    long long n;
    cin >> n;
	cout << (long long)((((3/2.0)*(n*n))+(-1/2.0)*n)+(n+1)+2*n)%45678 << '\n';
}

