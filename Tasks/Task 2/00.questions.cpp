//00.bools.cpp
//Pablo Campoy Fernández  10-10-2021

#include <iostream>
using namespace std;

//1. Write a file 00.bools.cpp with the result of the next expressions, from a) to r), directly thinking:
int main()
{
    a. true and true -> true;

    b. true and false -> false;

    c. 1 = 1 and 2 = 1 -> false;

    d. "test" = "test" -> true;

    e. 1 = 1 or 2 != 1 -> true;

    f. true and 1 = 1 -> true;

    g. "test" =  "testing" -> false;

    h. 1 != 0 and 2 = 1 -> false;

    i. "test" = "testing" -> false;

    j. "test" = 1 -> false;

    k. not(true and false) -> false;

    l. not(1 = 1 and 0 != 1) -> false;

    m. not(10 != 1 or 100 = 100) -> false;

    n. not(1 != 10 or 3 = 4) -> false;

    o. not ("testing" = "testing" and "Zed" = "Cool Guy") -> false;

    p. 1 = 1 and not("testing" = 1 or 1 = 0) -> true;

    q. "chunky" = "bacon" and not(3 = 4 or 3 = 3) -> false;

    r. 3 = 3 and not("testing" = "testing" or "Ruby" = "Fun") -> false;

}

/*2. En C is not possible to concatenate logic expressions: a<b<c<d<e; you have to separate each pair of
comparisons from the next one and insert an and. Write 0 <= x <= 100 in C */

int main()
{
    0 <= x and x <= 100;
}


//3. What is the difference between an algorithm and a program?
An algorithm is a self-contained step-by-step set of operations to be performed to solve a specific problem or a class of problems.

Program is step-by-step instructions which is implemented for solving problems by computer systems. It must be understandable by the programmer and the computer.


/*4. How could you write:
not ( x < y and y > 5)
without the first global negation (look at De Morgan laws)*/
int main()
{
    not(x < y and y > 5) = (x => y) or (y <= 5)
}

/* 5. Write the expressions
not ( found and (A =B) or (A =C) )
without the first global negation and simplifying the rest.
HINT: the variable found is another boolean variable (with the possible states or values: Try or
False), as the other 2 variables in this expression, A and B, the 2 variables could contain whatever
boolean value */
int main()
{
    (found = false) or (A != B) and (A != C)
}



