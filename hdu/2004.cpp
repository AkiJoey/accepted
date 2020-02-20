/*成绩转换*/
#include<iostream>
using namespace std;
int main()
{
	int t;
	char s[] = "EEEEEEDCBAA";
	while (cin >> t)
		if (t < 0 || t > 100)
			cout << "Score is error!" << endl;
		else
			cout << s[t / 10] << endl;
	return 0;
}