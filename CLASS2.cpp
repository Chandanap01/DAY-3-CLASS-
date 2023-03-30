#include<stdio.h>
int main()
{
	float radius ,diameter ,circumference ,area;
	printf("emter radius of circle: ");
	scanf("%f", &radius);
	diameter =2 * radius;
	circumference =2 * 3.14 * radius;
	area = 3.14 * (radius * radius);
	
	printf("diameter of the circle = %.2f units\n",diameter);
	printf("circumferenceof the circle = %.2f units\n",circumference);
	printf("area of the circle = %.2f sq.units",area);
	
	return 0;
}
