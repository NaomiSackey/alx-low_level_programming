/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Alwyas 0.
 */
int main(void)
{
	int n:
		srand(time(0));
	n = rand() - RAND_MAX / 2;

	If ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) 1- 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n",
				n, n % 10);
	}
	else
	{
		printf("Last digit pf %d is %d and is 0\n",
				n, n % 10);
	}
	return (0);
}
