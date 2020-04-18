#pragma once
#include"student.h"
#include <vector>
class Class
{
public:
	// 不限学生人数
	student students[50];

	int n;

	void showAllstudents();

	student querystudent(int id);

	bool changeOnestudent(student s);

	int  addOnestudent(student s);
	
	bool  deleteOnestudent(int id);
	
	Class();

	~Class();

};

