#include <iostream>
#include <string>
using namespace std;

void output(string name, bool c) {
	if (c) {
		cout << "������ɣ�������������Ϊ" << name << "-1.exe, " << name << "-1-VS.exe, " << name << "-2.exe, " << name << "-2-VS.exe��" << name << "-demo.exe���н���ıȽϣ�\n" << endl;
		string log = "type " + name + "-comparison.log";
		system(log.c_str());
		cout << endl;
		cout << "�����������ɵ����ݼ�����" << name << "-0-data.txt���ҵ�\n��ʦʾ��������������"
			<< name << "-0-result.log���ҵ�\n���������������(��������)-answer.log���ҵ�\n�����ȽϽ������"
			<< name << "-compaison.log���ҵ�\n" << endl;
	}
	else {
		cout << "������ɣ�������������Ϊ" << name << ".exe, " << name << "-VS.exe��" << name << "-demo.exe���н���ıȽϣ�\n" << endl;
		string log = "type " + name + "-comparison.log";
		system(log.c_str());
		cout << endl;
		cout << "�����������ɵ����ݼ�����" << name << "-0-data.txt���ҵ�\n��ʦʾ��������������"
			<< name << "-0-result.log���ҵ�\n���������������(��������)-answer.log���ҵ�\n�����ȽϽ������"
			<< name << "-compaison.log���ҵ�\n" << endl;
	}
}