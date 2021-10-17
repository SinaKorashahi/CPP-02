//Sina Khorashahi - 98440373
//4.
#include<iostream>
#define Max 100
using namespace std;

float avrege(int, float[Max]);
float min(int, float[Max]);
float max(int, float[Max]);

int main() 
{
	int number_of_student;
	float score, scores[Max];
	cout << "number of students: ";
	cin >> number_of_student;
	cout << "Score of each students: \n";
	for (int i = 0; i < number_of_student; ++i)
	{
		cout << i + 1 << ". ";
		cin >> score;
		scores[i] = score;
	}
	cout << "Average: " << avrege(number_of_student, scores) << "\nMax: " << max(number_of_student, scores) << "\nMin: " << min(number_of_student, scores);
	return 0;
}
float avrege(int number_of_student, float scores[Max])
{
	float sum = 0;
	for (int i = 0; i < number_of_student; ++i)
		sum += scores[i];
	return sum / number_of_student;
}
float min(int number_of_student, float scores[Max])
{
	float temp = scores[0];
	for (int i = 0; i < number_of_student; ++i)
		if (temp > scores[i])
			temp = scores[i];
	return temp;
}
float max(int number_of_student, float scores[Max])
{
	float temp = scores[0];
	for (int i = 0; i < number_of_student; ++i)
		if (temp < scores[i])
			temp = scores[i];
	return temp;
}

