#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	cin >> a >> b;
	while (a != b) {
		if (0 == b % a) {
			cout << "factor\n";
		}
		else if (0 == a % b) {
			cout << "multiple\n";
		}
		else {
			cout << "neither\n";
		}

		cin >> a >> b;
	}

	return 0;
}