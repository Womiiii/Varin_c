#include <stdio.h>
 
struct student 
{
    char name[20];
    int age;
    float sredniy;
};
 
int main(void)
{
    int maxball = 0, index = 0;

    struct student people[] = {{"Tom",26, 8.79}, {"Jimmy",27, 8.79}, {"OLEG",17, 10.0}, {"Alex",23, 4.2}, {"George",23, 8.79}};

    int n = sizeof(people)/sizeof(people[0]);//находим размер массивчика (сколько всего ячеек в нём)

    for(int i=0; i<n; i++)
    {
        if (people[i].sredniy > maxball)
        {
            maxball = people[i].sredniy;
            index = i;
        }
    }
    printf("The best student! Name:%s \t Age: %d \t SRball: %f \n", people[index].name, people[index].age, people[index].sredniy);
    return 0;
}