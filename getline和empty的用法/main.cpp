#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main(void) {
	string addr;//地址

	cout << "美女你打算去哪里旅游？" << endl;
	
	getline(cin,addr);//读取一整行的字符串

	//emply用于判断是否为空输入
	if (addr.empty()) {
		cout << "请输入地址" << endl;
	}
	else {
		cout << "太巧了我准备也到" << addr << "去旅游" << endl;
	}


	cout << "地址的长度是：" << addr.size() << endl;//计算字符串的长度
	cout << "地址的长度是：" << addr.length() << endl;//计算字符串的长度

	system("pause");
	return 0;
}