#include <iostream>
#include "Vector3D.h"
#include "Vector2.h"
#include "Vector.h"

using namespace std;

int main()
{
	Vector3D q(0, 0, 0);
	cout << q;
	cout << ++q;
	cout << --q;
	Vector2 a;
	cout << "A  " << endl; cin >> a;
	cout << "A = " << a << endl;
	a.Distance();
	a.scalar();
	a.isEqual();
	a.isEqual2();
	cout << ++a;
	cout << --a;
	a++;
	a--;


}
