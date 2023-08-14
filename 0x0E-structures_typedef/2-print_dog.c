#define "dog.h"

/**
 * print_dog - Entry point
 * @d: data of dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d)
	{
		d->name;
		d->age;
		d->owner;
	}

	if (name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (owner == NULL)

		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
