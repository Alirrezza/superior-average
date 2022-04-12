#include "Student.h"

void Student::setName()
{
	cout << "name:";
	getline(cin, name);
}

void Student::setLastname()
{
	cout << "Lastname:";
	getline(cin, lastname);
}

void Student::setScore()
{
	
	if (flag == 1)
	{
		avrage = avrage - score;
	}
	cout << "Score:";
	cin >> score;
	avrage = avrage + score;
	getchar();
}

void Student::getName()const
{
	cout <<"Student's name is:"<< name << endl;
}

void Student::getLastname()const
{
	cout << "Student's lastname is:" << lastname << endl;
}

void Student::getId()const
{
	cout << "Student's ID is:" << id << endl;
}

void Student::getScore()const
{
	
	cout << "Student's score is:" << score << endl;
	
}

void Student::getNumberOfStudent()
{
	cout << "The number of student is:" << counter<<endl;
}

 void Student::setAvrage()
{
	
	 cout << "The avrage of students is:" << avrage / (double)counter << endl;
}