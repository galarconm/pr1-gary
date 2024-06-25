//<<Here you have to include libraries>>
#include <stdio.h>

int main(){

	//<<Here you have to include the source code of your program>>
  char name[80];
	int age;
	float weight;


	printf("Please, entry your name: ");
	scanf("%s", name);

	printf("Please, entry your age: ");
	scanf("%d", &age);

	printf("Please, entry your weight in kilograms: ");
	scanf("%f", &weight);


	printf("\n\nMy name is %s and I am %d years old. My weight is %f kg.\n", name, age, weight);
	
    return 0;
	
}
