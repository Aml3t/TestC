#include <stdio.h>
#include <stdlib.h>
/*  double cube(double num); */
/*  int max(int num1,int num2, int num3); */
struct  Student {     char name[50];   char major[50];   int age;  double gpa; };


int main()
{


    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.5;
    strcpy ( student1.name, "Jim");
    strcpy ( student1.major, "CompSci");
    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy ( student2.name, "Pam");
    strcpy ( student2.major, "Art");

    printf ("%s ""%s ""%d ""%f ",student1.name, student1.major,student1.age,student1.gpa);

    /*
    char grade; /* or char grade = 'A';
    printf ("Input your Grade: ");
    scanf ("%c",&grade);
    switch (grade)
    {
    case 'A' :  printf ("You did great");
    break;
    case 'B' :  printf ("You did very good");
    break;
    case 'C' : printf ("You did OK");
    break;
    case 'D' : printf ("You did very bad");
    break;
    case 'F' : printf ("You FAILED bru");
    break;
    default :   printf ("Invalid Grade");
    }

    /*
    double num1;
    double num2;
    char op;

    printf ("Enter a number: ");
    scanf ("%lf", &num1);
    printf ("Enter a number: ");
    scanf ("%lf", &num2);
    printf ("Give me an operator: ");
    scanf (" %c", &op);

    if ( op == '+'){
    printf ("You have choosen to add so the result is: %f", num1 + num2 );
    } else if ( op =='-'){
    printf ("You have choosen to subtract so the result is: %f", num1 - num2);
    } else if ( op == '*'){
    printf ("You have choosen to multiply so the result is: %f",num1 * num2);
    } else if ( op == '/'){
    printf ("You have choosen to divide so the result is: %f", num1 / num2);
    } else {
    printf ("Invalid Operator");
    }


    /*if (!(3 < 2))
    {
    printf ("True");
    }
    /*
    if (2 > 4 || 2 > 4 )
    {
    printf ("True");
    }
    else
    {
    printf ("False");
    }

    /*printf ("%d", max (10, 30, 30));
    /*printf ("The answer is: %f", cube(3));

    /*
    sayHi ("Pit",10);
    sayHi ("Mike",20);
    sayHi ("Oscar",30);

    /*
    int luckyNumbers [20];
    luckyNumbers[0]=2;
    luckyNumbers[1]=4;
    luckyNumbers[2]=6;
    luckyNumbers[3]=8;
    printf ("%d", luckyNumbers [2] );

    /*
    int luckyNumbers[] = {4, 8, 5, 16, 23, 42} ;
    luckyNumbers [2] = 200;
    printf ("%d",luckyNumbers [2] );

    /*
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf ("Enter a color:");
    scanf ("%s",color );
    printf ("Enter a plural noun:");
    scanf ("%s",pluralNoun );
    printf ("Enter a celebrity:");
    scanf ("%s%s",celebrityF,celebrityL );

    printf ("Roses are %s\n", color );
    printf ("%s are Blue\n", pluralNoun );
    printf ("I love %s %s", celebrityF,celebrityL );

    /*
    double A;
    double B;
    printf ("Enter the first number ");
    scanf ("%lf",&A);
    printf ("Enter the second number ");
    scanf ("%lf",&B);
    printf ("\nThe sum of the numbers is %f",A + B );

    /*
    int age;
    double gpa;
    char name[30];
    printf ("Input your Name:");
    fgets (name,30,stdin);
    printf ("Input your Age:");
    scanf ("%d", &age );
    printf ("Input your GPA:");
    scanf ("%lf", &gpa );
    printf ("Your name is: %s,your age is: %d, and your GPA is :%f", name, age , gpa );

    /*
    int age = 40;
    double gpa = 3.6;
    char grade = 'A';
    char phrase[] = "Hello World";
    printf ("Data list: His AGE is %d, his GPA is %f and his grade is %c.\nAfter that it's %s", age , gpa , grade, phrase);
    */
    return 0;
}

void sayHi (char thename[], int theage)
{
    printf ("Hello %s, your age is %d\n", thename,theage);
}


double cube(double num)
{
    double result = num * num * num ;
    return result;
}

int max(int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1>=num3 )
    {
    result = num1;
    }
    else if (num2 >= num1 && num2 >=num3 )
    {
    result = num2;
    }
    else
    {
    result = num3;
    }
    return result;
}
