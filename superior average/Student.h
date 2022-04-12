#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {

private:

	static int counter;
	static double avrage;

	string name;
	string lastname;
	string id;

	int flag{ 0 }; //It is used for edit score

	double score{ 0.00 };

public:

	Student(string name,string lastname,double score) {

		flag = 1;
		this->name = name;
		this->lastname = lastname;
		this->score = score;
		id = "400" + to_string(counter) + "3";
		counter++;
		avrage += score;

		
	}
	Student() {

		id = "400" + to_string(counter) + "3";
		counter++;
		avrage += score;

	}

	void setName();
	void setLastname();
	void setScore();
	void getName()const;
	void getLastname()const;
	void getId()const;
	void getScore()const;
	static void getNumberOfStudent();
	static void setAvrage();
		
	
};

