// ClassStudentProject.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "student.h"
#include"Class.h"

int main()
{
	Class myClass;
	while (true) {
		cout << "\n1-展示所有学生信息\n2-查询一名学生信息\n3-修改一名学生信息\n4-添加一名学生信息\n5-删除学生信息\n";
		int id, select;
		string name, info;
		cout << "请输入您的操作编号：";
		cin >> select;
		if (select == 1) {
			myClass.showAllstudents();
		}
		else if (select == 2) {
			cout << "\n请输入查询学号：";
			cin >> id;
			student s = myClass.querystudent(id);
			if (s.id == -1) {
				cout << "对不起，没有这个学生！！\n";
			}
			else {
				s.introduce();
			}
		}
		else if (select == 3) {
			cout << "\n请输入学生学号：";
			cin >> id;//int i = id - 1;
			cout << "\n请输入学生姓名：";
			cin >> name;
			cout << "\n请输入学生简介：";
			cin >> info;
			student newS = student(id, name, info);
			myClass.changeOnestudent(newS);

		}
		else if (select == 4) {
			cout << "\n请输入学生学号：";
			cin >> id;
			cout << "\n请输入学生姓名：";
			cin >> name;
			cout << "\n请输入学生简介：";
			cin >> info;
			student s = student(id, name, info);
			myClass.addOnestudent(s);
			
		}
		else if (select == 5) {
			cout << "\n请输入删除学号：";
			cin >> id;
			myClass.deleteOnestudent(id);
		}
		}
		return 0;
	}

