#include<iostream>
#include<string>
using namespace std;
int main() {
	string name="";
	int number = 0;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "학번을 입력하세요: ";
	cin >> number;

	cout << "\n<출력>"<<endl;
	cout << "이름: " << name << endl;
	cout << "학번: " << number << endl;
}