#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main(void) {
	string addr;//��ַ

	cout << "��Ů�����ȥ�������Σ�" << endl;
	
	getline(cin,addr);//��ȡһ���е��ַ���

	//emply�����ж��Ƿ�Ϊ������
	if (addr.empty()) {
		cout << "�������ַ" << endl;
	}
	else {
		cout << "̫������׼��Ҳ��" << addr << "ȥ����" << endl;
	}


	cout << "��ַ�ĳ����ǣ�" << addr.size() << endl;//�����ַ����ĳ���
	cout << "��ַ�ĳ����ǣ�" << addr.length() << endl;//�����ַ����ĳ���

	system("pause");
	return 0;
}