#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - Short description, single line
 *   * a blank line
 *    * Description: Longer description of the function)
 *     * Return: Description of the returned value
 *      */


int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
					if (n == 0)
							{
										printf("%d is zero\n", n);
											}
						else if (n > 0)
								{
											printf("%d is positive\n", n);
												}
							else
									{
												printf("%d is negative\n", n);
													}

								return (0);
}
