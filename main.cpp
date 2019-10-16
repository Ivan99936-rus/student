#include "human.h"
#include "student.cpp"

int main(char argc, char *argv[])
{

    Human *h = new Human();
    h-> say();

    Student *x = new Student("Petr", 174, 71, "I-51");
    x->say();

    return 0;
}
