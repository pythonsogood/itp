// Known issues:
// Bad Checker or Input

#include <iostream>
#include <cstring>
#include <algorithm>

struct Applicant {
	int id;
	char name[1024];
	char surname[1024];
	int subject1;
	int subject2;
	int subject3;
	int selected_subject;
	bool special_case;
};

bool compare(Applicant a, Applicant b) {
	int total_a = a.subject1 + a.subject2 + a.subject3 + a.selected_subject;
	int total_b = b.subject1 + b.subject2 + b.subject3 + b.selected_subject;
	if (total_a != total_b) {
		return total_a > total_b;
	}
	return a.selected_subject > b.selected_subject;
}

int main() {
	unsigned int n, m;
	std::cin >> n >> m;

	Applicant *applicants = new Applicant[n];

	int special_cases = 0;

	for (int i=0; i<n; ++i) {
		struct Applicant applicant;

		char special_case[8];

		std::cin >> applicant.id >> applicant.name >> applicant.surname >> applicant.subject1 >> applicant.subject2 >> applicant.subject3 >> applicant.selected_subject >> special_case;
		applicant.special_case = (std::strcmp(special_case, "YES") == 0);

		if (applicant.special_case) {
			special_cases++;
		}

		applicants[i] = applicant;
	}

	std::sort(applicants, applicants+n, compare);

	int default_cases = m-special_cases;

	for (int i=0; i<default_cases; ++i) {
		std::cout << applicants[i].id << " " << applicants[i].name << " " << applicants[i].surname << " " << applicants[i].subject1 + applicants[i].subject2 + applicants[i].subject3 + applicants[i].selected_subject << std::endl;
		if (applicants[i].special_case) {
			default_cases++;
		}
	}

	for (int i=default_cases; i<n; i++) {
		if (applicants[i].special_case) {
			std::cout << applicants[i].id << " " << applicants[i].name << " " << applicants[i].surname << " " << applicants[i].subject1 + applicants[i].subject2 + applicants[i].subject3 + applicants[i].selected_subject << std::endl;
		}
	}

	return 0;
}