#include <stdio.h>
 
struct date 
{
    int day;
    int mounth;
    int year;
    
};

struct Person
{
    char * name;
    struct date wasBorn;
};

int main(void)
{
    int n, i= 0;
    struct Person people[] = {{"Alex", {1, 2, 2000}}, {"Ken", {4, 5, 1995}}, {"Alex", {31, 11, 1911}}, {"Alex", {8, 8, 2008}}, {"Alex", {16, 7, 2019}}};

    n = sizeof(people) / sizeof(people[0]);
    printf("%d\n", n);

    for ( i; i < n; i++)
    {
        printf("Number %d: %s, was born in %d.%d.%dy.\n", i+1, people[i].name, people[i].wasBorn.day, people[i].wasBorn.mounth, people[i].wasBorn.year);
    }

    printf("\nLate, than 2000\n\n");
    
    for ( i = 0; i < n; i++)
    {
        if (people[i].wasBorn.year > 2000 )
        printf("Number %d: %s, was born in %d.%d.%dy.\n", i+1, people[i].name, people[i].wasBorn.day, people[i].wasBorn.mounth, people[i].wasBorn.year);
    }

    
 //   printf("The best student! Name:%s \t Age: %d \t SRball: %f \n", people[index].name, people[index].age, people[index].sredniy);
    return 0;
}