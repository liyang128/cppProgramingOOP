#include "stdafx.h"
#include "student.h"


student::student()
{
}


student::~student()
{
}
void student::introduce() {
	cout << "\n**********************\n";
	cout << "ѧ��ѧ�ţ�" << id << "\t";
	cout << "ѧ��������" << name << "\t";
	cout << "ѧ����飺" << info << "\t";
	cout << "\n**********************\n";
}
student::student(int id,string na,string info) {
	this->id = id;
	this->name = na;
	this->info = info;
}