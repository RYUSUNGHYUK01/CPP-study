#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, password, re_password;
    cout << "�̸� �Է�: ";
    cin >> name;
    cout << "��ȣ �Է�: ";
    cin >> password;
    cout << "�ٽ� �Է�: ";
    cin >> re_password;

    if(password == re_password)
        cout << name << "�Բ��� �α����ϼ̽��ϴ�.";
    else
        cout << name << "��, �ٽ� �Է��ϼ���.";
}