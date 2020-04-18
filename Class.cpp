#include "stdafx.h"
#include "Class.h"


Class::Class()
{
	// 当做初始的10个学生
	int ids[10] = {1,2,3,4,5,6,7,8,9,10};
	string names[10] = { "李一","李二","李三","李四","李五","李六","李七","李八","李九","李十" };
	string infos[10] = { "同学一","同学二","同学三","同学四","同学五","同学六","同学七","同学八","同学九","同学十" };
	
	// 记录当前学生数量
	n = 0;

	// 把初始的10个学生放入班级
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

// 根据学号查询学生
student Class::querystudent(int id) {
	for (int i = 0; i < n; i++) {
		if (students[i].id == id)
			return students[i];
	}
	student s(-1, "", "");
	return s;
}

// 改变一个学生
bool Class::changeOnestudent(student s) {
	for (int i = 0; i < n; i++) {
		if (students[i].id == s.id) {
			students[i] = s;
		}
	}
	return true;
}

// 添加一个学生，返回添加学生的编号
int Class::addOnestudent(student s) {
	if (n == 50)
		return -1;
	students[n++] = s;
	return n;
}

//删除根据id删除一个学生
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