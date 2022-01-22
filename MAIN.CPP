#include <iostream>
#include <iomanip>

int len(char *s) {
	int i = 0;
	while (s[i++] != '\0');
	return i;
}

bool check(char s) {
	return !(s >= '0' && s <= '9');
}

bool CauDacBiet(char *s, int &head) {
	// skip beginning space
	while (s[head++] == ' ');

	// check 
	while ((check(s[head])) && (s[head] != '\0')) head++;
	if (s[head] == '\0') return true;
	else return false;
}
int main() {
	char s[100] = "khim cho12";
	int n = 0;

	
	std::cout << CauDacBiet(s, n);
	system("pause");
}