## Structures

## 01
    Write a program (WAP) to take as input the name, student ID and CGPA of a student, and
    prints it.



    Sample input
    Mr. A
    011131144
    3.86



    Sample output
    Name: Mr. A
    Student ID: 011131144
    CGPA: 3.86


##

```c
#include <stdio.h>
typedef struct
{
    char name[20];
    char id[20];
    float cgpa;
} S;

int main()
{

    S s1;
    scanf("%19[^\n]%*c", &s1.name);
    scanf("%19[^\n]%*c", &s1.id);
    scanf("%f", &s1.cgpa);
    printf("%s\n", s1.name);
    printf("%s\n", s1.id);
    printf("%.2f\n", s1.cgpa);
    return 0;
}



```

## 02
    WAP to take as input names, student IDs and CGPA of n students, and print them.


    Sample input
    3
    Mr. A 011131144
    3.86
    Mr. B 011131155
    3.76
    Mr. C 011131166
    3.66


    Sample output
    Student 1: Mr. A
    Student ID: 011131144
    CGPA: 3.86
    Student 2: Mr. B
    Student ID: 011131155
    CGPA: 3.76
    Student 3: Mr. C
    Student ID: 011131166
    CGPA: 3.66


##

```c
#include <stdio.h>
typedef struct
{
    char name[20];
    char id[20];
    float cgpa;
} S;

int main()
{
    int n;
    scanf("%d", &n); // consume the newline after the number
    getchar();

    S s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%[^\n]%*c", s[i].name);
        scanf("%[^\n]%*c", s[i].id);
        scanf("%f", &s[i].cgpa); // consume the newline after the float
        getchar();
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s[i].name);
        printf("%s\n", s[i].id);
        printf("%.2f\n", s[i].cgpa);
    }

    return 0;
}



```

## 03
    WAP to take as input the 2D coordinates (x,y) of two points and calculate the distance
    between them.



    Sample input
    0 0
    3 4

    1 2
    2 3



    Sample output
    The distance is 5.00 unit

    The distance is 1.41 unit


##

```c

#include <math.h>
#include <stdio.h>

typedef struct
{
    int x1, y1, x2, y2;

} strct;

int main()
{
    strct crdinte;
    scanf("%d %d %d %d", &crdinte.x1, &crdinte.y1, &crdinte.x2, &crdinte.y2);
    float distance = sqrt((crdinte.x2 - crdinte.x1) * (crdinte.x2 - crdinte.x1) + (crdinte.y2 - crdinte.y1) * (crdinte.y2 - crdinte.y1));
    printf("The distance is %.2f unit\n", distance);
    return 0;
}


```

## 04
    WAP to take as input the 2D coordinates (x,y) of three points and calculate the area of the
    triangle with the points taken as vertices. If no such triangle is possible, print “They are in
    the same line”.





    Sample input
    0 0
    0 3
    3 4

    0 0
    2 3
    8 12





    Sample output
    The area is 6.00 unit


    They are in the same line


##

```c

#include <math.h>
#include <stdio.h>
typedef struct
{
    int x1, y1, x2, y2;

} strct;

int main()
{
    strct x, y, z;
    scanf("%d%d", &x.x1, &x.y1);
    scanf("%d%d", &y.x1, &y.y1);
    scanf("%d%d", &z.x1, &z.y1);
    float lngth1 = sqrt((y.x1 - x.x1) * (y.x1 - x.x1) + (y.y1 - x.y1) * (y.y1 - x.y1));
    float lngth2 = sqrt((z.x1 - y.x1) * (z.x1 - y.x1) + (z.y1 - y.y1) * (z.y1 - y.y1));
    float lngth3 = sqrt((z.x1 - x.x1) * (z.x1 - x.x1) + (z.y1 - x.y1) * (z.y1 - x.y1));

    float s = (lngth1 + lngth2 + lngth3) / 2;

    float area = sqrt(s * (s - lngth1) * (s - lngth2) * (s - lngth3));

    if (lngth1 + lngth2 <= lngth3 || lngth2 + lngth3 <= lngth1 || lngth3 + lngth1 <= lngth2)
    {
        printf("They are in the same line\n");
    }
    else
    {
        printf("the area is %.2f unit", area);
    }

    return 0;
}


```

## 05
    WAP to take as input the real and imaginary parts of a complex number, and print it in a+bi
    form.



    Sample input
    5 6

    5 -6



    Sample output
    5.00+6.00i

    5.00-6.00i


##

```c


#include <stdio.h>
typedef struct
{
    float real;
    float imaginary;
} cmplx;
int main()
{
    cmplx num;

    scanf("%f %f", &num.real, &num.imaginary);

    printf("%.2f%+.2fi\n", num.real, num.imaginary);

    return 0;
}


```

## 06
    WAP to take as input the real and imaginary parts of a complex number, and calculate its
    modulus and argument.



    Sample input
    3 4



    Sample output
    Modulus = 5.0000
    Argument = 0.9272


##

```c
#include <stdio.h>
typedef struct
{
    float x;
    float y;
} value;
float findModulus(value x)
{
    return sqrt(x.x * x.x + x.y * x.y);
}

float findArgument(value x)
{

    return atan2(x.y, x.x);
}
int main()
{
    value X;
    scanf("%f", &X.x);
    scanf("%f", &X.y);

    printf("Modulus: %.4f", findModulus(X) * 1.0);
    printf("\nArgument: %.4f", findArgument(X) * 1.00);

    return 0;
}



```

## 07

    WAP to take as input two complex numbers, and add and subtract them.


    Sample input
    3 4
    5 -2


    Sample output
    (3+4i)+(5-2i)=8+2i
    (3+4i)-(5-2i)=-2+6i

##

```c

#include <stdio.h>

struct complex
{
    float real;
    float imag;
};

struct complex add(struct complex num1, struct complex num2)
{
    struct complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

struct complex subtract(struct complex num1, struct complex num2)
{
    struct complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}

int main()
{
    struct complex num1, num2, sum, difference;

    scanf("%f %f", &num1.real, &num1.imag);

    scanf("%f %f", &num2.real, &num2.imag);

    // Add the complex numbers
    sum = add(num1, num2);

    // Subtract the complex numbers
    difference = subtract(num1, num2);

    printf("%.2f + %.2fi\n", sum.real, sum.imag);
    printf("%.2f + %.2fi\n", difference.real, difference.imag);

    return 0;
}



```

## 08

    WAP to take as input two complex numbers, and multiply them.


    Sample input
    3 4
    5 -2


    Sample output
    (3+4i)*(5-2i)=23+14i


##

```c

#include <stdio.h>
typedef struct
{
    float real;
    float imag;
} complex;

int main()
{

    complex num1, num2;
    scanf("%f %f", &num1.real, &num1.imag);
    scanf("%f %f", &num2.real, &num2.imag);

    float mult1;
    if (num1.imag < 0)
    {

        mult1 = num1.real * num2.real - num1.imag * num2.imag;
    }
    else if (num2.imag < 0)
    {
        mult1 = num1.real * num2.real - num1.imag * num2.imag;
    }
    else
    {

        mult1 = num1.real * num2.real + num1.imag * num2.imag;
    }

    float mult2 = num1.real * num2.imag + num1.imag * num2.real;

    printf("%.f + %.fi\n", mult1, mult2);
    return 0;
}


```

## 09

    WAP to take as input two complex numbers and divide them.


    Sample input
    3 4
    5 -2


    Sample output
    (3+4i)/(5-2i) = 0.24+0.89i


##

```c

#include <stdio.h>
typedef struct
{
    float real;
    float imag;
} complex;

complex div(complex num1, complex num2)
{
    complex result;
    double denom = (num2.real * num2.real + num2.imag * num2.imag);
    result.real = (num1.real * num2.real + num1.imag * num2.imag) / denom;
    result.imag = (num1.imag * num2.real - num1.real * num2.imag) / denom;
    return result;
}
int main()
{

    complex num1, num2;
    scanf("%f %f", &num1.real, &num1.imag);
    scanf("%f %f", &num2.real, &num2.imag);

    printf("%.2f + %.2fi\n", div(num1, num2).real, div(num1, num2).imag);
    return 0;
}


```

## 10
    WAP to take as input the meter and centimeter components of a length, and show the
    length in meter and in centimeter.



    Sample input
    3 15



    Sample output
    Length in meter: 3.15
    Length in centimeter: 315


##

```c

#include <stdio.h>

typedef struct
{
    double meter;
    double centimeter;
} distance;

int main()
{

    distance val;
    scanf("%lf %lf", &val.meter, &val.centimeter);

    printf("Length in meter: %.2lf\n", val.meter + val.centimeter / 100);
    printf("Length in centimeter: %.lf", val.meter * 100 + val.centimeter);

    return 0;
}


```

## 11
    WAP to take as input two lengths as their meter and centimeter components, and calculate
    their sum without calculating total meter and centimeter length. (e.g. to add 3m 33cm and 7m 70cm, 
    you cannot add 3.33m and 7.7m. You have to add the components individually)





    Sample input
    3 33
    7 70





    Sample output
    The sum is 11 meter 3 centimeter


##

```c

#include <stdio.h>

typedef struct
{
    int meter;
    int centimeter;
} distance;
int main()
{

    distance num1, num2;
    scanf("%d%d%d%d", &num1.meter, &num1.centimeter, &num2.meter, &num2.centimeter);

    int sum_metr = num1.meter + num2.meter;
    int sum_centimeter = num1.centimeter + num2.centimeter;

    if (sum_centimeter >= 100)
    {
        sum_metr++;
        sum_centimeter -= 100;
    }
    printf("The sum is %d meter  %d Centimeter", sum_metr, sum_centimeter);

    return 0;
}


```

## 12
    WAP to take as input the hour, minute and second components of a time interval, and show
    the time interval in hour, in minute and in second.



    Sample input
    3 45 48



    Sample output
    Time interval in hour: 3.76
    Time interval in minute: 225.80
    Time interval in second: 13584


##

```c
#include <stdio.h>

typedef struct
{
    double hour;
    double min;
    double sec;
} data;

int main()
{

    data time;
    scanf("%lf%lf%lf", &time.hour, &time.min, &time.sec);
    printf("Time interval in hour %.2lf\n", (time.hour + (time.min / 60) + (time.sec / 3600)) * 1.00);
    printf("Time interval in min %.2lf\n", (time.hour * 60 + time.min + (time.sec / 60)) * 1.00);
    printf("Time interval in sec %.lf\n", time.hour * 3600 + time.min * 60 + time.sec);

    return 0;
}



```

## 13
    WAP to take as input the hour, minute and second components of two times of a day, and
    find out their difference (assume the latest time is given first).



    Sample input
    3 45 48
    1 55 50



    Sample output
    1 49 58

##

```c
#include <stdio.h>

typedef struct
{
    int hour;
    int minute;
    int second;
} time;

time time_difference(time later_time, time earlier_time)
{
    time diff;

    if (earlier_time.hour > later_time.hour ||
        (earlier_time.hour == later_time.hour && earlier_time.minute > later_time.minute) ||
        (earlier_time.hour == later_time.hour && earlier_time.minute == later_time.minute && earlier_time.second > later_time.second))
    {
        later_time.hour += 24;
    }

    diff.second = later_time.second - earlier_time.second;
    diff.minute = later_time.minute - earlier_time.minute;
    diff.hour = later_time.hour - earlier_time.hour;

    if (diff.second < 0)
    {
        diff.minute--;
        diff.second += 60;
    }
    if (diff.minute < 0)
    {
        diff.hour--;
        diff.minute += 60;
    }

    return diff;
}

int main()
{
    time earlier, later;
    scanf("%d%d%d%d%d%d", &later.hour, &later.minute, &later.second, &earlier.hour, &earlier.minute, &earlier.second);
    time diff = time_difference(later, earlier);
    printf("Time difference: %d:%d:%d\n", diff.hour, diff.minute, diff.second);
}


```