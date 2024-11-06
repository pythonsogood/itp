#include <iostream>

struct Student {
	int id;
	char surname[2048];
	double grade;
};

int main() {
	unsigned int n;
	std::cin >> n;

	Student *students = new Student[n];

	for (int i=0; i<n; ++i) {
		struct Student student;

		std::cin >> student.id >> student.surname >> student.grade;

		students[i] = student;
	}

	int student_index = -1;

	for (int i=0; i<n; ++i) {
		if (student_index == -1 || students[i].grade > students[student_index].grade) {
			student_index = i;
		}
	}

	std::cout << students[student_index].id << " " << students[student_index].surname << " " << students[student_index].grade;

	return 0;
}