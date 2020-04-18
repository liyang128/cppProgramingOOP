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
	cout << "学生学号：" << id << "\t";
	cout << "学生姓名：" << name << "\t";
	cout << "学生简介：" << info << "\t";
	cout << "\n**********************\n";
}
student::student(int id,string na,string info) {
	this->id = id;
	this->name = na;
	this->info = info;
}