#include <stdio.h>

double get_major_score(double score, char grade[3], int* total_class) {
	double grade_score;
	if (grade[0] == 'A')
		grade_score = 4.0;
	else if (grade[0] == 'B')
		grade_score = 3.0;
	else if (grade[0] == 'C')
		grade_score = 2.0;
	else if (grade[0] == 'D')
		grade_score = 1.0;
	else if (grade[0] == 'F') {
		*total_class += score;
		return 0.0;
	}
	else if (grade[0] == 'P') {
		return 0.0;
	}

	if (grade[1] == '+')
		grade_score += 0.5;
	*total_class += score;
	return grade_score * score;
}

int main() {
	double major_avg = 0.0;
	double total_score = 0.0;
	int total_class = 0;
	double score;
	char grade[3];

	for (int _ = 0; _ < 20; _++) {
		scanf("%*s %lf %s", &score, grade);
		total_score += get_major_score(score, grade, &total_class);
	}

	major_avg = total_score / total_class;

	printf("%.6lf", major_avg);
	return 0;
}