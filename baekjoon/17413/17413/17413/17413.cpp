#include <iostream>
#include<stack>
#include<string>
using namespace std;

void Print(stack <char>& s) { // ���ÿ��� ���ڿ� ������ ������
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}

int main() {
	string str;
	getline(cin, str);

	bool tag = false;

	stack <char> s;

	for (char ch : str) {
		if (ch == '<')
		{
			Print(s);
			tag = true;
			cout << ch;
		}
		else if (ch == '>')
		{
			tag = false;
			cout << ch;
		}
		else if (tag) // < > ������ ���ڶ��
		{
			cout << ch;
		}
		else // < > ������ ���ڰ� �ƴ϶��
		{
			if (ch == ' ')
			{
				Print(s);
				cout << ch;
			}
			else
			{
				s.push(ch);
			}
		}
	}

	// �� ���ڿ����� �������� ������ �����Ƿ�, ���� ���ڿ��� ���ÿ��� ���������
	Print(s);
	cout << '\n';

	return 0;
}
