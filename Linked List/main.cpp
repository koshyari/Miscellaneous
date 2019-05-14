#include <bits/stdc++.h>
#include "llist.h"
using namespace std;

#define FOR(a,b,c)   for(int a=b;a<c;a++)
#define REP(i,n)     FOR(i,0,n)

int main()
{
	cout << "How many numbers: ";
	int n,x; cin >> n;
	LinkedList object;
	REP(i,n){
		cout << "Insert number: ";
		cin >> x;
		object.Insert(x);
		cout << "The list is now: ";
		object.Print();
	}
}
