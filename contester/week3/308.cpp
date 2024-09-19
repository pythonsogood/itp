#include <iostream>
#include <ctime>

int main() {
	int year;
	std::cin >> year;

	std::tm time_constructor;
	time_constructor.tm_year = year - 1900; // ctime counts year since 1900
	time_constructor.tm_mon = 9; // 0-based, 9 - october
	time_constructor.tm_mday = 1;
	time_constructor.tm_hour = 0;
	time_constructor.tm_min = 0;
	time_constructor.tm_sec = 0;
	std::time_t time = std::mktime(&time_constructor);

	tm* parsed_time = std::localtime(&time);
	parsed_time->tm_mday += 7 - parsed_time->tm_wday; // make sure if it's 7th weekday
	char weekday[4];
	std::strftime(weekday, 4, "%d", parsed_time); // extract as text
	char* weekday_num = weekday;
	if (weekday[0] == '0') {
		weekday_num++; // %d - formats with leading zero, %e formats with leading whitespace, pointer trick (converting to int resulting compiler error in contester)
	}
	std::cout << weekday_num;
	return 0;
}