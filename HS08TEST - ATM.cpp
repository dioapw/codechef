#include<bits/stdc++.h>
using namespace std;

int main() {
	int money; float balance, total;
    cin>>money>>balance;
	if (money%5==0 && (money+0.50) <= balance)
	{
	    total = (balance - money)- 0.50;
	    cout << fixed << setprecision(2) << total;
	} else {
	    cout << fixed << setprecision(2) << balance;
	}
	return 0;
}
