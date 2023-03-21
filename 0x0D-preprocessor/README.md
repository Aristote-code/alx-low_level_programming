Task 0
c
Copy code
#ifndef _OBJECT_LIKE_MACRO_H
#define _OBJECT_LIKE_MACRO_H

#define SIZE 1024

#endif /* _OBJECT_LIKE_MACRO_H */
Task 1
c
Copy code
#ifndef _PI_H
#define _PI_H

#define PI 3.14159265359

#endif /* _PI_H */
Task 2
c
Copy code
#include <stdio.h>
#define FILENAME __FILE__

int main(void)
{
    printf("%s\n", FILENAME);
    return (0);
}
Task 3
c
Copy code
#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x < 0) ? -(x) : (x))

#endif /* _FUNCTION_LIKE_MACRO_H */
Task 4
c
Copy code
#ifndef _SUM_H
#define _SUM_H

#define SUM(x, y) (x + y)

#endif /* _SUM_H */