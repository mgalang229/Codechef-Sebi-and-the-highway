#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		double s, sg, fg, d, t;
		cin >> s >> sg >> fg >> d >> t;
		// view the images in this repository for better understanding
		// the formula is also written there
		double total_speed = s + ((180 * d) / t);
		if (abs(sg - total_speed) == abs(fg - total_speed)) {
			cout << "DRAW";
		} else if (abs(sg - total_speed) < abs(fg - total_speed)) {
			cout << "SEBI";
		} else {
			cout << "FATHER";
		}                                                                            
		cout << '\n';
	}
	return 0;
}      
