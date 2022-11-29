#include <stdio.h>
#include <string.h>
# define MAX_NAME 20

struct student {
	int ID;
	char name[MAX_NAME];
	double grade;	
};

int main(int argc, char *argv[]) {
	struct student student1 = {1003, "HanbitJang", 4.3};
	
	student1.ID = 1030;
	strcpy(student1.name, "HanbitJang");
	student1.grade = 3.5;
	
	printf("ID : %i\n", student1.ID);
	printf("name : %s\n", student1.name);
	printf("grade : %lf\n", student1.grade);
	
	return 0;
}
