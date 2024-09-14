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
	cout<<"请选择登录方式，输入对应数字"<<endl;
	cout << "1.管理员登录/t/t2.用户登录"<<endl;
	cin >> x;
	switch (x){
		case 1:
			cout << "***管理员登录***" << endl;
			cout<<"请输入用户名"<<endl;
			cin >> admin.account;
			cout << "请输入密码" << endl;
			cin >> admin.password;
			save(admin);
			cout << "登录成功" << endl;
			cout << "**********" << endl;
			cout << "请选择：" << endl;
			cout << "1.词句检索" << endl;
			cout << "2.诗词库" << endl;
			cout << "3.诗词评论区" << endl;
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
			cout << "***用户登录***" << endl;
			cout << "请输入用户名" << endl;
			cin >> account_in;
		
			




	}

}