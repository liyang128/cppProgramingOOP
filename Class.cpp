#include "stdafx.h"
#include "Class.h"


Class::Class()
{
	// ������ʼ��10��ѧ��
	int ids[10] = {1,2,3,4,5,6,7,8,9,10};
	string names[10] = { "��һ","���","����","����","����","����","����","���","���","��ʮ" };
	string infos[10] = { "ͬѧһ","ͬѧ��","ͬѧ��","ͬѧ��","ͬѧ��","ͬѧ��","ͬѧ��","ͬѧ��","ͬѧ��","ͬѧʮ" };
	
	// ��¼��ǰѧ������
	n = 0;

	// �ѳ�ʼ��10��ѧ������༶
	for (int i = 0; i < 10; i++) {
		student s(ids[i], names[i], infos[i]);
		addOnestudent(s);
	}
}


Class::~Class()
{

}

void Class::showAllstudents() {
	for (int i = 0; i < n; i++) {
		students[i].introduce();
	}
}

// ����ѧ�Ų�ѯѧ��
student Class::querystudent(int id) {
	for (int i = 0; i < n; i++) {
		if (students[i].id == id)
			return students[i];
	}
	student s(-1, "", "");
	return s;
}

// �ı�һ��ѧ��
bool Class::changeOnestudent(student s) {
	for (int i = 0; i < n; i++) {
		if (students[i].id == s.id) {
			students[i] = s;
		}
	}
	return true;
}

// ���һ��ѧ�����������ѧ���ı��
int Class::addOnestudent(student s) {
	if (n == 50)
		return -1;
	students[n++] = s;
	return n;
}

//ɾ������idɾ��һ��ѧ��
bool Class::deleteOnestudent(int id) {
	int no = 0;
	for (; no < n; no++) {
		if (students[no].id == id)
			break;
	}
	for (int i = no; i < n - 1; i++) {
		students[i] = students[i + 1];
	}
	n--;
	return true;
}