// ClassStudentProject.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "student.h"
#include"Class.h"

int main()
{
	Class myClass;
	while (true) {
		cout << "\n1-չʾ����ѧ����Ϣ\n2-��ѯһ��ѧ����Ϣ\n3-�޸�һ��ѧ����Ϣ\n4-���һ��ѧ����Ϣ\n5-ɾ��ѧ����Ϣ\n";
		int id, select;
		string name, info;
		cout << "���������Ĳ�����ţ�";
		cin >> select;
		if (select == 1) {
			myClass.showAllstudents();
		}
		else if (select == 2) {
			cout << "\n�������ѯѧ�ţ�";
			cin >> id;
			student s = myClass.querystudent(id);
			if (s.id == -1) {
				cout << "�Բ���û�����ѧ������\n";
			}
			else {
				s.introduce();
			}
		}
		else if (select == 3) {
			cout << "\n������ѧ��ѧ�ţ�";
			cin >> id;//int i = id - 1;
			cout << "\n������ѧ��������";
			cin >> name;
			cout << "\n������ѧ����飺";
			cin >> info;
			student newS = student(id, name, info);
			myClass.changeOnestudent(newS);

		}
		else if (select == 4) {
			cout << "\n������ѧ��ѧ�ţ�";
			cin >> id;
			cout << "\n������ѧ��������";
			cin >> name;
			cout << "\n������ѧ����飺";
			cin >> info;
			student s = student(id, name, info);
			myClass.addOnestudent(s);
			
		}
		else if (select == 5) {
			cout << "\n������ɾ��ѧ�ţ�";
			cin >> id;
			myClass.deleteOnestudent(id);
		}
		}
		return 0;
	}

