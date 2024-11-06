#include <iostream>
#include <algorithm>

struct Student {
	int id;
	double grade;
};

bool compare(Student a, Student b) {
	if (a.grade != b.grade) {
		return a.grade > b.grade;
	}
	return a.id < b.id;
}

int main() {
	unsigned int n;
	std::cin >> n;

	Student *students = new Student[n];

	for (int i=0; i<n; ++i) {
		struct Student student;

		std::cin >> student.id >> student.grade;

		students[i] = student;
	}

	std::sort(students, students+n, compare);

	for (int i=0; i<n; ++i) {
		std::cout << students[i].id << " " << students[i].grade << std::endl;
	}


	return 0;
}