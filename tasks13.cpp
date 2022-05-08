#include <iostream>
#include <string>
using namespace std;

//13.1
void task1() {
	string s;
	cin >> s;

	string res;
	int pos_ddot = -1;
	int pos_semicol = -1;
	for (int i = 0; i < s.length(); i++) {
		char a = s[i];
		if (a == ':' && pos_ddot == -1) {
			pos_ddot = i;
		}
		if (a == ';' && pos_semicol == -1 && pos_ddot >= 0) {
			pos_semicol = i;
		}
		if (pos_ddot >= 0 && pos_semicol == -1) {
			res.push_back(a);
		}
		if (pos_ddot == -1) {
			res = s;
		}
	}
	cout << "result:" << res;
}
//13.2
void task2() {
	string s;
	getline(cin,s);

	size_t pos_first_stop = s.find('.');
	size_t pos_last_stop = s.rfind('.');

	if (pos_first_stop < pos_last_stop) {
		s.erase(pos_last_stop, s.length()-pos_last_stop);
		s.erase(0, pos_first_stop+1);
	}
	else if (pos_first_stop = -1 && pos_first_stop == pos_last_stop) {
		s.erase(0, pos_first_stop+1);
	}
	else {
		size_t k = 0;
		while (s[k] == ' ') {
			k++;
		}
		s.erase(0, k);
	}
	cout << "r=" << s;
}

void task3() {
	string s;
	getline(cin, s);

	string words[100];
	size_t k = 0;
	string::size_type pos = 0;
	string::size_type del = s.find(" ");
	while (k < 100 && del != string::npos) {
		if (del > pos + 1) {
			words[k++] = s.substr(pos,del);
		}
		pos = del;
		del = s.find(" ");
	}
	for (size_t i = 0; i < k; i++) {
		words[k].erase(words[k].length() - 2, 1);
	}
	for (size_t i = 0; i < k; i++) {
		cout << words[i] << " ";
	}
}

void task_13_3() {
	std::string s, res, tmp;

	std::cout << "Enter string: ";
	std::getline(std::cin, s);

	tmp = s;
	s = s.substr(s.find_first_not_of(' '));
	size_t i = s.find_first_of(' ');

	while (i != std::string::npos) {
		s = s.substr(0, i - 1) + s.substr(i);
		i = s.find_first_of(' ', s.find_first_not_of(' ', i));
	}

	res = tmp.substr(0, tmp.find_first_not_of(' ')) + s.substr(0, s.size() - 1);

	std::cout << "res = " << res << '\n';
}
int task4(const char* a) {

}
int main(int argc,char **argv) {
	int mas[10];
	int k = task4("asdf1 4342 4 556");
}