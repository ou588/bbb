#include<iostream>
#include<fstream>
using namespace std;
#include<string>
#include"fun.h"

void save(us u1)
{
	ofstream ofile;
	ofile.open("user.txt", ios::out);
	ofile << u1.account << endl;
	ofile << u1.password << endl;
	ofile.close();
};




void login() {
	int x,y;
	us admin;
	string account_in;
	cout<<"**********"<< endl;
	cout<<"��ѡ���¼��ʽ�������Ӧ����"<<endl;
	cout << "1.����Ա��¼/t/t2.�û���¼"<<endl;
	cin >> x;
	switch (x){
		case 1:
			cout << "***����Ա��¼***" << endl;
			cout<<"�������û���"<<endl;
			cin >> admin.account;
			cout << "����������" << endl;
			cin >> admin.password;
			save(admin);
			cout << "��¼�ɹ�" << endl;
			cout << "**********" << endl;
			cout << "��ѡ��" << endl;
			cout << "1.�ʾ����" << endl;
			cout << "2.ʫ�ʿ�" << endl;
			cout << "3.ʫ��������" << endl;
			cin >> y;
			switch (y) {
				case 1:
					search();
				case 2:
					poem();
				case 3:
					comments();
			}

		case 2:
			cout << "***�û���¼***" << endl;
			cout << "�������û���" << endl;
			cin >> account_in;
		
			




	}

}