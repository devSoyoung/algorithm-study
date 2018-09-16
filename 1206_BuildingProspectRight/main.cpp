#include <iostream>
using namespace std;

int main() {
	int result[10];
	for (int test = 0; test < 10; test++) {
		bool** map;
		int width = 0;
		cin >> width;

		// new
		map = new bool*[width];
		for (int i = 0; i < width; i++) {
			map[i] = new bool[255];
		}

		// get data and set map
		int height = 0;
		for (int i = 0; i < width; i++) {
			cin >> height;
			for (int j = 0; j < height; j++) {
				map[i][j] = true;
			}
			for (int j = height; j < 255; j++) {
				map[i][j] = false;
			}
		}

		// check
		result[test] = 0;
		for (int i = 2; i < width - 2; i++) {
			for (int j = 0; j < 255; j++) {
				if (map[i][j]) {
					// if block exist
					if (!map[i - 2][j] && !map[i - 1][j] && !map[i + 1][j] && !map[i + 2][j])
						result[test]++;
				}
				else break;
			}
		}
		cout << '#' << test + 1 << ' ' << result[test] << endl;
	}
	return 0;
}