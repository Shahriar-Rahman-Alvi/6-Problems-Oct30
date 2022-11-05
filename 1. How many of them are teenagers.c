#include <stdio.h>

int main()
{
    int n, i, age, teens = 0;
    printf("This program is to find number of teens. \n");
    printf("Enter the number of people's age to compare: ");
    scanf("%d" , &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter person %d's age: ", i + 1);
        scanf("%d", &age);
        if (age > 12 && age < 20)
        {
            teens += 1;
        }
    }
    printf("%d of %d are teenagers. " , n , teens);
    return 0;
}
