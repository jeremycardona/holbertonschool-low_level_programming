/**
 * _islower - check for lowercase character
 * Return: 1 if it is lowercase, 0 if it is not
 * Description: check for lowercase character, return 1
 * if true, 0 otherwise.
 */
int _islower(int c){
	char lower;
	for (lower = 'a'; lower <= 'z'; lower++)
		if (lower == c)
			return (1);
	return (0);
}
