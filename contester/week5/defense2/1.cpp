// input: 4 abcd
// output: a$b$$c$$$d$$$$

#include <iostream>

int main() {
	int n;
	std::cin >> n;

	char s[n];
	std::cin >> s;

	char ss[n+(((1+n)*n)/2)]; // arithmetic progression
	int ssl = 0;

	for (int i=0; i<n ; ++i) {
		ss[ssl] = s[i];
		ssl++;
		for (int j=0; j<=i; ++j) {
			ss[ssl] = '$';
			ssl++;
		}
	}

	std::cout << ss;

	return 0;
}